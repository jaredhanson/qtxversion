#ifndef QTXVERSION_VERSIONRANGE_H
#define QTXVERSION_VERSIONRANGE_H

#include "versionglobal.h"
#include "version.h"
#include <QtCore>

QTX_BEGIN_NAMESPACE


// https://github.com/rubygems/rubygems/blob/master/lib/rubygems/requirement.rb
// https://github.com/isaacs/node-semver
// http://npmjs.org/doc/json.html
class VersionRange
{
public:
    VersionRange();
    VersionRange(const QString & string);
    VersionRange(const QStringList & strings);
    VersionRange(const VersionRange & other);
    
    bool isSatisfiedBy(const Version & version) const;
    
    VersionRange & operator= (const VersionRange & rhs);
    
private:
    typedef enum {
        UnknownOperator,
        EqualToOperator,
        GreaterThanOperator,
        GreaterThanOrEqualToOperator,
        LessThanOperator,
        LessThanOrEqualToOperator,
        NotEqualToOperator
    } Operator;
    
    typedef QPair<VersionRange::Operator, Version> RequirementPair;
    VersionRange::RequirementPair parse(const QString & string);
    
    QList< VersionRange::RequirementPair > mRequirements;
};


QTX_END_NAMESPACE

#endif // QTXVERSION_VERSIONRANGE_H
