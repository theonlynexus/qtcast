# QtCast

QtCast? is meant to make podcasting easy for everyone.

The project is planned to be coded in C/C++, leveraging on QT and FMOD. While FMOD is not open source, there is no comparable library in the open source world, and they offer a free license for non-commercial projects.

# Build instructions.

## Introduction 

Need to install the FMOD libraries. You can do that by downloading the necessary files for you system from http://www.fmod.org

### Compilation steps 

#### On Linux

1. Run `qmake QtCast.pro`
2. Run `make Makefile.Debug` or `make Makefile.Release` depending on the configuration you want to build
3. If there are no compile/link errors you're done and ready to run the app from the debug/release directory
  
#### On Windows 

1. Check the include and libraries paths in QtCast.pro
2. Open a Visual Studio command prompt
3. Run `qmake QtCast.pro -spec win32-msvcXXXX` (replace XXX with the compiler version you are using, e.g. 2010)
4. Run `nmake Makefile.Debug` or `nmake Makefile.Release` depending on the configuration you want to build
5. If there are no compile/link errors you're done and ready to run the app from the debug/release directory
