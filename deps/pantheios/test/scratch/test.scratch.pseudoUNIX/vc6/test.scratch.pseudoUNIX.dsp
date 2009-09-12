# Microsoft Developer Studio Project File - Name="test.scratch.pseudoUNIX" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Application" 0x0101

CFG=test.scratch.pseudoUNIX - Win32 Debug Multithreaded pseudoUNIX
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "test.scratch.pseudoUNIX.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "test.scratch.pseudoUNIX.mak" CFG="test.scratch.pseudoUNIX - Win32 Debug Multithreaded pseudoUNIX"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "test.scratch.pseudoUNIX - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "test.scratch.pseudoUNIX - Win32 Debug" (based on "Win32 (x86) Application")
!MESSAGE "test.scratch.pseudoUNIX - Win32 Debug Multithreaded pseudoUNIX" (based on "Win32 (x86) Application")
!MESSAGE "test.scratch.pseudoUNIX - Win32 Release Multithreaded pseudoUNIX" (based on "Win32 (x86) Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "test.scratch.pseudoUNIX - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MT /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /YX /FD /c
# ADD CPP /nologo /W3 /GX /O2 /I "$(STLSOFT)/include" /I "$(PANTHEIOS_ROOT)/include" /I "$(UNIXEM)/include" /D "WIN32" /D "NDEBUG" /D "STLSOFT_FORCE_C_COMPILATION_IN_BETA" /D "STRICT" /D "_CONSOLE" /YX /FD /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0xc09 /d "NDEBUG"
# ADD RSC /l 0xc09 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /machine:I386
# ADD LINK32 pthreadVC.lib ws2_32.lib /nologo /version:1.0 /subsystem:console /map /machine:I386 /out:"Release/test.scratch.pseudoUNIX.debug.exe" /libpath:"$(PANTHEIOS_ROOT)/lib" /libpath:"$(UNIXEM)/lib"
# SUBTRACT LINK32 /pdb:none

!ELSEIF  "$(CFG)" == "test.scratch.pseudoUNIX - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MTd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /YX /FD /GZ /c
# ADD CPP /nologo /W3 /Gm /GX /Zi /Od /I "$(STLSOFT)/include" /I "$(PANTHEIOS_ROOT)/include" /I "$(UNIXEM)/include" /D "WIN32" /D "_DEBUG" /D "STLSOFT_FORCE_C_COMPILATION_IN_BETA" /D "STRICT" /D "_CONSOLE" /YX /FD /GZ /c
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0xc09 /d "_DEBUG"
# ADD RSC /l 0xc09 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept
# ADD LINK32 ws2_32.lib advapi32.lib /nologo /version:1.0 /subsystem:console /map /debug /machine:I386 /out:"Debug/test.scratch.pseudoUNIX.debug.exe" /pdbtype:sept /libpath:"$(PANTHEIOS_ROOT)/lib" /libpath:"$(UNIXEM)/lib"
# SUBTRACT LINK32 /pdb:none

!ELSEIF  "$(CFG)" == "test.scratch.pseudoUNIX - Win32 Debug Multithreaded pseudoUNIX"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "DebugMTUNIX"
# PROP BASE Intermediate_Dir "DebugMTUNIX"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "DebugMTUNIX"
# PROP Intermediate_Dir "DebugMTUNIX"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MTd /W3 /Gm /GX /Zi /Od /I "$(STLSOFT)/include" /I "$(PANTHEIOS_ROOT)/include" /I "$(UNIXEM)/include" /D "WIN32" /D "_DEBUG" /D "STLSOFT_FORCE_C_COMPILATION_IN_BETA" /D "STRICT" /D "_CONSOLE" /YX /FD /GZ /c
# ADD CPP /nologo /MTd /W3 /Gm /GX /Zi /Od /I "$(STLSOFT)/include" /I "$(PANTHEIOS_ROOT)/include" /I "$(UNIXEM)/include" /D "_DEBUG" /D "STLSOFT_FORCE_C_COMPILATION_IN_BETA" /D "STRICT" /D "_CONSOLE" /D "UNIX" /D "_STLSOFT_FORCE_ANY_COMPILER" /D "UNIXSTL_NO_WIN32_NATIVE_ATOMIC_FUNCTIONS" /YX /FD /GZ /c
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0xc09 /d "_DEBUG"
# ADD RSC /l 0xc09 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib advapi32.lib ws2_32.lib user32.lib /nologo /version:1.0 /subsystem:console /map /debug /machine:I386 /out:"Debug/test.scratch.pseudoUNIX.debug.exe" /pdbtype:sept /libpath:"$(PANTHEIOS_ROOT)/lib" /libpath:"$(UNIXEM)/lib"
# SUBTRACT BASE LINK32 /pdb:none
# ADD LINK32 pthreadVC.lib ws2_32.lib advapi32.lib ole32.lib oleaut32.lib /nologo /version:1.0 /subsystem:console /map /debug /machine:I386 /out:"Debug/test.scratch.pseudoUNIX.debug.exe" /pdbtype:sept /libpath:"$(PANTHEIOS_ROOT)/lib" /libpath:"$(UNIXEM)/lib" /libpath:"$(PTHREADS-WIN32)/lib"
# SUBTRACT LINK32 /pdb:none

!ELSEIF  "$(CFG)" == "test.scratch.pseudoUNIX - Win32 Release Multithreaded pseudoUNIX"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "ReleaseMTUNIX"
# PROP BASE Intermediate_Dir "ReleaseMTUNIX"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "ReleaseMTUNIX"
# PROP Intermediate_Dir "ReleaseMTUNIX"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MT /W3 /GX /O2 /I "$(STLSOFT)/include" /I "$(PANTHEIOS_ROOT)/include" /I "$(UNIXEM)/include" /D "WIN32" /D "NDEBUG" /D "STLSOFT_FORCE_C_COMPILATION_IN_BETA" /D "STRICT" /D "_CONSOLE" /YX /FD /c
# ADD CPP /nologo /MT /W3 /GX /O2 /I "$(STLSOFT)/include" /I "$(PANTHEIOS_ROOT)/include" /I "$(UNIXEM)/include" /D "NDEBUG" /D "STLSOFT_FORCE_C_COMPILATION_IN_BETA" /D "STRICT" /D "_CONSOLE" /D "UNIX" /D "_STLSOFT_FORCE_ANY_COMPILER" /D "UNIXSTL_NO_WIN32_NATIVE_ATOMIC_FUNCTIONS" /YX /FD /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0xc09 /d "NDEBUG"
# ADD RSC /l 0xc09 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib advapi32.lib ws2_32.lib user32.lib /nologo /version:1.0 /subsystem:console /map /machine:I386 /out:"Release/test.scratch.pseudoUNIX.debug.exe" /libpath:"$(PANTHEIOS_ROOT)/lib" /libpath:"$(UNIXEM)/lib"
# SUBTRACT BASE LINK32 /pdb:none
# ADD LINK32 pthreadVC.lib ws2_32.lib /nologo /version:1.0 /subsystem:console /map /machine:I386 /out:"Release/test.scratch.pseudoUNIX.debug.exe" /libpath:"$(PANTHEIOS_ROOT)/lib" /libpath:"$(UNIXEM)/lib" /libpath:"$(PTHREADS-WIN32)/lib"
# SUBTRACT LINK32 /pdb:none

!ENDIF 

# Begin Target

# Name "test.scratch.pseudoUNIX - Win32 Release"
# Name "test.scratch.pseudoUNIX - Win32 Debug"
# Name "test.scratch.pseudoUNIX - Win32 Debug Multithreaded pseudoUNIX"
# Name "test.scratch.pseudoUNIX - Win32 Release Multithreaded pseudoUNIX"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Group "STLSoft Header Files"

# PROP Default_Filter ""
# Begin Group "STLSoft"

# PROP Default_Filter ""
# End Group
# Begin Group "PlatformSTL"

# PROP Default_Filter ""
# End Group
# Begin Group "UNIXSTL"

# PROP Default_Filter ""
# End Group
# End Group
# Begin Group "Pantheios Header Files"

# PROP Default_Filter ""
# End Group
# Begin Group "UNIXEm Header Files"

# PROP Default_Filter ""
# End Group
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# End Group
# End Target
# End Project
