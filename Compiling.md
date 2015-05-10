# Introduction #

Need to install the FMOD libraries. You can do that by downloading the necessary files for you system from http://www.fmod.org

# Compilation steps #

## On Linux ##

  1. Run `qmake QtCast.pro`
  1. Run `make Makefile.Debug` or `make Makefile.Release` depending on the configuration you want to build
  1. If there are no compile/link errors you're done and ready to run the app from the debug/release directory

## On Windows ##

  1. Check the include and libraries paths in QtCast.pro
  1. Open a Visual Studio command prompt
  1. Run `qmake QtCast.pro -spec win32-msvcXXXX` (replace XXX with the compiler version you are using, e.g. 2010)
  1. Run `nmake Makefile.Debug` or `nmake Makefile.Release` depending on the configuration you want to build
  1. If there are no compile/link errors you're done and ready to run the app from the debug/release directory