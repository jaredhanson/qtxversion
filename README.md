# QtxVersion

QtxVersion provides classes for versioning in accordance with the SemVer
specification.

## Build

To build a dynamic library:

    $ qmake CONFIG+=dylib
    $ make
    
To build a static library:

    $ qmake CONFIG+=static
    $ make

## Test

To run the test suite, first configure and build QtxVersion as a dynamic
library, which each test executable will link against.  Then invoke the `check`
target to execute all tests in the suite.

    $ qmake CONFIG+=dylib
    $ make
    $ make check

## Documentation

To generate API documentation, invoke the `docs` target.

    $ make docs

To view the documentation, open it in a web browser.

    $ open doc/qtxversion/qtxversion-module.html

## License

[Apache License, Version 2.0](http://opensource.org/licenses/Apache-2.0)

Copyright (c) 2012-2013 Sifteo Inc. <[http://www.sifteo.com/](http://www.sifteo.com/)>
