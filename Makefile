#############################################################################
# Makefile for building: QtCast
# Generated by qmake (2.01a) (Qt 4.5.0) on: Tue Aug 4 05:01:19 2009
# Project:  QtCast.pro
# Template: app
# Command: /opt/qtsdk-2009.01/qt/bin/qmake -spec /opt/qtsdk-2009.01/qt/mkspecs/linux-g++ -unix CONFIG+=debug_and_release CONFIG+=debug -o Makefile QtCast.pro
#############################################################################

first: debug
install: debug-install
uninstall: debug-uninstall
MAKEFILE      = Makefile
QMAKE         = /opt/qtsdk-2009.01/qt/bin/qmake
DEL_FILE      = rm -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
COPY          = cp -f
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
INSTALL_FILE  = install -m 644 -p
INSTALL_PROGRAM = install -m 755 -p
INSTALL_DIR   = $(COPY_DIR)
DEL_FILE      = rm -f
SYMLINK       = ln -sf
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
SUBTARGETS    =  \
		debug \
		release

debug: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug
debug-make_default: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug 
debug-make_first: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug first
debug-all: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug all
debug-clean: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug clean
debug-distclean: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug distclean
debug-install: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug install
debug-uninstall: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug uninstall
release: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release
release-make_default: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release 
release-make_first: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release first
release-all: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release all
release-clean: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release clean
release-distclean: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release distclean
release-install: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release install
release-uninstall: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release uninstall

Makefile: QtCast.pro  /opt/qtsdk-2009.01/qt/mkspecs/linux-g++/qmake.conf /opt/qtsdk-2009.01/qt/mkspecs/common/g++.conf \
		/opt/qtsdk-2009.01/qt/mkspecs/common/unix.conf \
		/opt/qtsdk-2009.01/qt/mkspecs/common/linux.conf \
		/opt/qtsdk-2009.01/qt/mkspecs/qconfig.pri \
		/opt/qtsdk-2009.01/qt/mkspecs/features/qt_functions.prf \
		/opt/qtsdk-2009.01/qt/mkspecs/features/qt_config.prf \
		/opt/qtsdk-2009.01/qt/mkspecs/features/exclusive_builds.prf \
		/opt/qtsdk-2009.01/qt/mkspecs/features/default_pre.prf \
		/opt/qtsdk-2009.01/qt/mkspecs/features/debug.prf \
		/opt/qtsdk-2009.01/qt/mkspecs/features/debug_and_release.prf \
		/opt/qtsdk-2009.01/qt/mkspecs/features/default_post.prf \
		/opt/qtsdk-2009.01/qt/mkspecs/features/warn_on.prf \
		/opt/qtsdk-2009.01/qt/mkspecs/features/qt.prf \
		/opt/qtsdk-2009.01/qt/mkspecs/features/unix/thread.prf \
		/opt/qtsdk-2009.01/qt/mkspecs/features/moc.prf \
		/opt/qtsdk-2009.01/qt/mkspecs/features/resources.prf \
		/opt/qtsdk-2009.01/qt/mkspecs/features/uic.prf \
		/opt/qtsdk-2009.01/qt/mkspecs/features/yacc.prf \
		/opt/qtsdk-2009.01/qt/mkspecs/features/lex.prf \
		/opt/qtsdk-2009.01/qt/lib/libQtXml.prl \
		/opt/qtsdk-2009.01/qt/lib/libQtCore.prl \
		/opt/qtsdk-2009.01/qt/lib/libQtGui.prl
	$(QMAKE) -spec /opt/qtsdk-2009.01/qt/mkspecs/linux-g++ -unix CONFIG+=debug_and_release CONFIG+=debug -o Makefile QtCast.pro
/opt/qtsdk-2009.01/qt/mkspecs/common/g++.conf:
/opt/qtsdk-2009.01/qt/mkspecs/common/unix.conf:
/opt/qtsdk-2009.01/qt/mkspecs/common/linux.conf:
/opt/qtsdk-2009.01/qt/mkspecs/qconfig.pri:
/opt/qtsdk-2009.01/qt/mkspecs/features/qt_functions.prf:
/opt/qtsdk-2009.01/qt/mkspecs/features/qt_config.prf:
/opt/qtsdk-2009.01/qt/mkspecs/features/exclusive_builds.prf:
/opt/qtsdk-2009.01/qt/mkspecs/features/default_pre.prf:
/opt/qtsdk-2009.01/qt/mkspecs/features/debug.prf:
/opt/qtsdk-2009.01/qt/mkspecs/features/debug_and_release.prf:
/opt/qtsdk-2009.01/qt/mkspecs/features/default_post.prf:
/opt/qtsdk-2009.01/qt/mkspecs/features/warn_on.prf:
/opt/qtsdk-2009.01/qt/mkspecs/features/qt.prf:
/opt/qtsdk-2009.01/qt/mkspecs/features/unix/thread.prf:
/opt/qtsdk-2009.01/qt/mkspecs/features/moc.prf:
/opt/qtsdk-2009.01/qt/mkspecs/features/resources.prf:
/opt/qtsdk-2009.01/qt/mkspecs/features/uic.prf:
/opt/qtsdk-2009.01/qt/mkspecs/features/yacc.prf:
/opt/qtsdk-2009.01/qt/mkspecs/features/lex.prf:
/opt/qtsdk-2009.01/qt/lib/libQtXml.prl:
/opt/qtsdk-2009.01/qt/lib/libQtCore.prl:
/opt/qtsdk-2009.01/qt/lib/libQtGui.prl:
qmake: qmake_all FORCE
	@$(QMAKE) -spec /opt/qtsdk-2009.01/qt/mkspecs/linux-g++ -unix CONFIG+=debug_and_release CONFIG+=debug -o Makefile QtCast.pro

qmake_all: FORCE

make_default: debug-make_default release-make_default FORCE
make_first: debug-make_first release-make_first FORCE
all: debug-all release-all FORCE
clean: debug-clean release-clean FORCE
distclean: debug-distclean release-distclean FORCE
	-$(DEL_FILE) Makefile

debug-mocclean: $(MAKEFILE).Debug
	$(MAKE) -f $(MAKEFILE).Debug mocclean
release-mocclean: $(MAKEFILE).Release
	$(MAKE) -f $(MAKEFILE).Release mocclean
mocclean: debug-mocclean release-mocclean

debug-mocables: $(MAKEFILE).Debug
	$(MAKE) -f $(MAKEFILE).Debug mocables
release-mocables: $(MAKEFILE).Release
	$(MAKE) -f $(MAKEFILE).Release mocables
mocables: debug-mocables release-mocables
FORCE:

$(MAKEFILE).Debug: Makefile
$(MAKEFILE).Release: Makefile
