#############################################################################
# Makefile for building: attributeViewer
# Generated by qmake (2.01a) (Qt 4.7.2) on: Tue Nov 29 10:06:34 2011
# Project:  attributeViewer.pro
# Template: app
# Command: /usr/local/Trolltech/Qt-4.7.2/bin/qmake -o Makefile attributeViewer.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DNVLinux -DQT_NO_DEBUG -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -m64 -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -m64 -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/local/Trolltech/Qt-4.7.2/mkspecs/linux-g++-64 -I. -I/usr/local/Trolltech/Qt-4.7.2/include/QtCore -I/usr/local/Trolltech/Qt-4.7.2/include/QtGui -I/usr/local/Trolltech/Qt-4.7.2/include -I/usr/local/include -I. -I.
LINK          = g++
LFLAGS        = -m64 -Wl,-O1 -Wl,-rpath,/usr/local/Trolltech/Qt-4.7.2/lib
LIBS          = $(SUBLIBS)  -L/usr/local/Trolltech/Qt-4.7.2/lib -L /usr/local/lib -lCHARTS -lnvutility -lpfm -lCZMIL -lQtGui -L/usr/local/Trolltech/Qt-4.7.2/lib -L/usr/X11R6/lib64 -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/local/Trolltech/Qt-4.7.2/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = attPrefs.cpp \
		attributeViewer.cpp \
		AxesDlg.cpp \
		main.cpp \
		UserScaleDlg.cpp \
		Vector.cpp moc_attPrefs.cpp \
		moc_attributeViewer.cpp \
		moc_AxesDlg.cpp \
		moc_UserScaleDlg.cpp \
		qrc_icons.cpp
OBJECTS       = attPrefs.o \
		attributeViewer.o \
		AxesDlg.o \
		main.o \
		UserScaleDlg.o \
		Vector.o \
		moc_attPrefs.o \
		moc_attributeViewer.o \
		moc_AxesDlg.o \
		moc_UserScaleDlg.o \
		qrc_icons.o
DIST          = /usr/local/Trolltech/Qt-4.7.2/mkspecs/common/g++.conf \
		/usr/local/Trolltech/Qt-4.7.2/mkspecs/common/unix.conf \
		/usr/local/Trolltech/Qt-4.7.2/mkspecs/common/linux.conf \
		/usr/local/Trolltech/Qt-4.7.2/mkspecs/qconfig.pri \
		/usr/local/Trolltech/Qt-4.7.2/mkspecs/features/qt_functions.prf \
		/usr/local/Trolltech/Qt-4.7.2/mkspecs/features/qt_config.prf \
		/usr/local/Trolltech/Qt-4.7.2/mkspecs/features/exclusive_builds.prf \
		/usr/local/Trolltech/Qt-4.7.2/mkspecs/features/default_pre.prf \
		/usr/local/Trolltech/Qt-4.7.2/mkspecs/features/release.prf \
		/usr/local/Trolltech/Qt-4.7.2/mkspecs/features/default_post.prf \
		/usr/local/Trolltech/Qt-4.7.2/mkspecs/features/warn_on.prf \
		/usr/local/Trolltech/Qt-4.7.2/mkspecs/features/qt.prf \
		/usr/local/Trolltech/Qt-4.7.2/mkspecs/features/unix/thread.prf \
		/usr/local/Trolltech/Qt-4.7.2/mkspecs/features/moc.prf \
		/usr/local/Trolltech/Qt-4.7.2/mkspecs/features/resources.prf \
		/usr/local/Trolltech/Qt-4.7.2/mkspecs/features/uic.prf \
		/usr/local/Trolltech/Qt-4.7.2/mkspecs/features/yacc.prf \
		/usr/local/Trolltech/Qt-4.7.2/mkspecs/features/lex.prf \
		/usr/local/Trolltech/Qt-4.7.2/mkspecs/features/include_source_dir.prf \
		attributeViewer.pro
QMAKE_TARGET  = attributeViewer
DESTDIR       = 
TARGET        = attributeViewer

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET):  $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: attributeViewer.pro  /usr/local/Trolltech/Qt-4.7.2/mkspecs/linux-g++-64/qmake.conf /usr/local/Trolltech/Qt-4.7.2/mkspecs/common/g++.conf \
		/usr/local/Trolltech/Qt-4.7.2/mkspecs/common/unix.conf \
		/usr/local/Trolltech/Qt-4.7.2/mkspecs/common/linux.conf \
		/usr/local/Trolltech/Qt-4.7.2/mkspecs/qconfig.pri \
		/usr/local/Trolltech/Qt-4.7.2/mkspecs/features/qt_functions.prf \
		/usr/local/Trolltech/Qt-4.7.2/mkspecs/features/qt_config.prf \
		/usr/local/Trolltech/Qt-4.7.2/mkspecs/features/exclusive_builds.prf \
		/usr/local/Trolltech/Qt-4.7.2/mkspecs/features/default_pre.prf \
		/usr/local/Trolltech/Qt-4.7.2/mkspecs/features/release.prf \
		/usr/local/Trolltech/Qt-4.7.2/mkspecs/features/default_post.prf \
		/usr/local/Trolltech/Qt-4.7.2/mkspecs/features/warn_on.prf \
		/usr/local/Trolltech/Qt-4.7.2/mkspecs/features/qt.prf \
		/usr/local/Trolltech/Qt-4.7.2/mkspecs/features/unix/thread.prf \
		/usr/local/Trolltech/Qt-4.7.2/mkspecs/features/moc.prf \
		/usr/local/Trolltech/Qt-4.7.2/mkspecs/features/resources.prf \
		/usr/local/Trolltech/Qt-4.7.2/mkspecs/features/uic.prf \
		/usr/local/Trolltech/Qt-4.7.2/mkspecs/features/yacc.prf \
		/usr/local/Trolltech/Qt-4.7.2/mkspecs/features/lex.prf \
		/usr/local/Trolltech/Qt-4.7.2/mkspecs/features/include_source_dir.prf \
		/usr/local/Trolltech/Qt-4.7.2/lib/libQtGui.prl \
		/usr/local/Trolltech/Qt-4.7.2/lib/libQtCore.prl
	$(QMAKE) -o Makefile attributeViewer.pro
/usr/local/Trolltech/Qt-4.7.2/mkspecs/common/g++.conf:
/usr/local/Trolltech/Qt-4.7.2/mkspecs/common/unix.conf:
/usr/local/Trolltech/Qt-4.7.2/mkspecs/common/linux.conf:
/usr/local/Trolltech/Qt-4.7.2/mkspecs/qconfig.pri:
/usr/local/Trolltech/Qt-4.7.2/mkspecs/features/qt_functions.prf:
/usr/local/Trolltech/Qt-4.7.2/mkspecs/features/qt_config.prf:
/usr/local/Trolltech/Qt-4.7.2/mkspecs/features/exclusive_builds.prf:
/usr/local/Trolltech/Qt-4.7.2/mkspecs/features/default_pre.prf:
/usr/local/Trolltech/Qt-4.7.2/mkspecs/features/release.prf:
/usr/local/Trolltech/Qt-4.7.2/mkspecs/features/default_post.prf:
/usr/local/Trolltech/Qt-4.7.2/mkspecs/features/warn_on.prf:
/usr/local/Trolltech/Qt-4.7.2/mkspecs/features/qt.prf:
/usr/local/Trolltech/Qt-4.7.2/mkspecs/features/unix/thread.prf:
/usr/local/Trolltech/Qt-4.7.2/mkspecs/features/moc.prf:
/usr/local/Trolltech/Qt-4.7.2/mkspecs/features/resources.prf:
/usr/local/Trolltech/Qt-4.7.2/mkspecs/features/uic.prf:
/usr/local/Trolltech/Qt-4.7.2/mkspecs/features/yacc.prf:
/usr/local/Trolltech/Qt-4.7.2/mkspecs/features/lex.prf:
/usr/local/Trolltech/Qt-4.7.2/mkspecs/features/include_source_dir.prf:
/usr/local/Trolltech/Qt-4.7.2/lib/libQtGui.prl:
/usr/local/Trolltech/Qt-4.7.2/lib/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -o Makefile attributeViewer.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/attributeViewer1.0.0 || $(MKDIR) .tmp/attributeViewer1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/attributeViewer1.0.0/ && $(COPY_FILE) --parents attPrefs.hpp attributeViewer.hpp attributeViewerHelp.hpp AxesDlg.hpp UnitRays.hpp UserScaleDlg.hpp Vector.hpp version.hpp .tmp/attributeViewer1.0.0/ && $(COPY_FILE) --parents icons.qrc icons.qrc .tmp/attributeViewer1.0.0/ && $(COPY_FILE) --parents attPrefs.cpp attributeViewer.cpp AxesDlg.cpp main.cpp UserScaleDlg.cpp Vector.cpp .tmp/attributeViewer1.0.0/ && (cd `dirname .tmp/attributeViewer1.0.0` && $(TAR) attributeViewer1.0.0.tar attributeViewer1.0.0 && $(COMPRESS) attributeViewer1.0.0.tar) && $(MOVE) `dirname .tmp/attributeViewer1.0.0`/attributeViewer1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/attributeViewer1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_attPrefs.cpp moc_attributeViewer.cpp moc_AxesDlg.cpp moc_UserScaleDlg.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_attPrefs.cpp moc_attributeViewer.cpp moc_AxesDlg.cpp moc_UserScaleDlg.cpp
moc_attPrefs.cpp: attPrefs.hpp
	/usr/local/Trolltech/Qt-4.7.2/bin/moc $(DEFINES) $(INCPATH) attPrefs.hpp -o moc_attPrefs.cpp

moc_attributeViewer.cpp: version.hpp \
		attPrefs.hpp \
		AxesDlg.hpp \
		UserScaleDlg.hpp \
		Vector.hpp \
		UnitRays.hpp \
		attributeViewer.hpp
	/usr/local/Trolltech/Qt-4.7.2/bin/moc $(DEFINES) $(INCPATH) attributeViewer.hpp -o moc_attributeViewer.cpp

moc_AxesDlg.cpp: AxesDlg.hpp
	/usr/local/Trolltech/Qt-4.7.2/bin/moc $(DEFINES) $(INCPATH) AxesDlg.hpp -o moc_AxesDlg.cpp

moc_UserScaleDlg.cpp: UserScaleDlg.hpp
	/usr/local/Trolltech/Qt-4.7.2/bin/moc $(DEFINES) $(INCPATH) UserScaleDlg.hpp -o moc_UserScaleDlg.cpp

compiler_rcc_make_all: qrc_icons.cpp qrc_icons.cpp
compiler_rcc_clean:
	-$(DEL_FILE) qrc_icons.cpp qrc_icons.cpp
qrc_icons.cpp: icons.qrc \
		icons/prefs.xpm \
		icons/horArrow.png \
		icons/attributeviewer.png \
		icons/quit.xpm \
		icons/zoom_cursor.xpm \
		icons/contextHelp.xpm \
		icons/verArrow.png \
		icons/ColumnChart.png \
		icons/chainLink.png \
		icons/mode_dot.xpm \
		icons/mode_line.xpm
	/usr/local/Trolltech/Qt-4.7.2/bin/rcc -name icons icons.qrc -o qrc_icons.cpp

qrc_icons.cpp: icons.qrc \
		icons/prefs.xpm \
		icons/horArrow.png \
		icons/attributeviewer.png \
		icons/quit.xpm \
		icons/zoom_cursor.xpm \
		icons/contextHelp.xpm \
		icons/verArrow.png \
		icons/ColumnChart.png \
		icons/chainLink.png \
		icons/mode_dot.xpm \
		icons/mode_line.xpm
	/usr/local/Trolltech/Qt-4.7.2/bin/rcc -name icons icons.qrc -o qrc_icons.cpp

compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_rcc_clean 

####### Compile

attPrefs.o: attPrefs.cpp attPrefs.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o attPrefs.o attPrefs.cpp

attributeViewer.o: attributeViewer.cpp attributeViewer.hpp \
		version.hpp \
		attPrefs.hpp \
		AxesDlg.hpp \
		UserScaleDlg.hpp \
		Vector.hpp \
		UnitRays.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o attributeViewer.o attributeViewer.cpp

AxesDlg.o: AxesDlg.cpp AxesDlg.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o AxesDlg.o AxesDlg.cpp

main.o: main.cpp attributeViewer.hpp \
		version.hpp \
		attPrefs.hpp \
		AxesDlg.hpp \
		UserScaleDlg.hpp \
		Vector.hpp \
		UnitRays.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

UserScaleDlg.o: UserScaleDlg.cpp UserScaleDlg.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o UserScaleDlg.o UserScaleDlg.cpp

Vector.o: Vector.cpp Vector.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Vector.o Vector.cpp

moc_attPrefs.o: moc_attPrefs.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_attPrefs.o moc_attPrefs.cpp

moc_attributeViewer.o: moc_attributeViewer.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_attributeViewer.o moc_attributeViewer.cpp

moc_AxesDlg.o: moc_AxesDlg.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_AxesDlg.o moc_AxesDlg.cpp

moc_UserScaleDlg.o: moc_UserScaleDlg.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_UserScaleDlg.o moc_UserScaleDlg.cpp

qrc_icons.o: qrc_icons.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qrc_icons.o qrc_icons.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

