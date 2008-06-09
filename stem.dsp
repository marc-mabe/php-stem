# Microsoft Developer Studio Project File - Name="stem" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Dynamic-Link Library" 0x0102

CFG=stem - Win32 Debug_TS
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "stem.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "stem.mak" CFG="stem - Win32 Debug_TS"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "stem - Win32 Debug_TS" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE "stem - Win32 Release_TS" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "stem - Win32 Debug_TS"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug_TS"
# PROP BASE Intermediate_Dir "Debug_TS"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug_TS"
# PROP Intermediate_Dir "Debug_TS"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MTd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_MBCS" /D "_USRDLL" /D "STEM_EXPORTS" /YX /FD /GZ /c
# ADD CPP /nologo /MTd /W3 /Gm /GX /ZI /Od /I "..\.." /I "..\..\main" /I "..\..\Zend" /I "..\..\TSRM" /I "..\..\..\bindlib_w32" /D ZEND_DEBUG=1 /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_MBCS" /D "_USRDLL" /D "STEM_EXPORTS" /D "COMPILE_DL_STEM" /D ZTS=1 /D "ZEND_WIN32" /D "PHP_WIN32" /D ENABLE_DANISH=1 /D ENABLE_DUTCH=1 /D ENABLE_ENGLISH=1 /D ENABLE_FINNISH=1 /D ENABLE_FRENCH=1 /D ENABLE_GERMAN=1 /D ENABLE_HUNGARIAN=1 /D ENABLE_ITALIAN=1 /D ENABLE_NORWEGIAN=1 /D ENABLE_PORTUGUESE=1 /D ENABLE_ROMANIAN=1 /D ENABLE_RUSSIAN=1 /D ENABLE_RUSSIAN_UNICODE=1 /D ENABLE_SPANISH=1 /D ENABLE_SWEDISH=1 /D ENABLE_TURKISH_UNICODE=1 /FR /YX /FD /GZ /c
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "_DEBUG"
# ADD RSC /l 0x409 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /dll /debug /machine:I386 /pdbtype:sept
# ADD LINK32 php4ts_debug.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /dll /debug /machine:I386 /out:"..\..\Debug_TS/php_stem.dll" /pdbtype:sept /libpath:"..\..\Debug_TS"
# SUBTRACT LINK32 /pdb:none

!ELSEIF  "$(CFG)" == "stem - Win32 Release_TS"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release_TS"
# PROP BASE Intermediate_Dir "Release_TS"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release_TS"
# PROP Intermediate_Dir "Release_TS"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MT /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_MBCS" /D "_USRDLL" /D "STEM_EXPORTS" /YX /FD /c
# ADD CPP /nologo /MD /W3 /GX /O2 /I "..\.." /I "..\..\main" /I "..\..\Zend" /I "..\..\TSRM" /I "..\..\\" /I "..\..\..\bindlib_w32" /D ZEND_DEBUG=0 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_MBCS" /D "_USRDLL" /D "STEM_EXPORTS" /D "COMPILE_DL_STEM" /D ZTS=1 /D "ZEND_WIN32" /D "PHP_WIN32" /D ENABLE_DANISH=1 /D ENABLE_DUTCH=1 /D ENABLE_ENGLISH=1 /D ENABLE_FINNISH=1 /D ENABLE_FRENCH=1 /D ENABLE_GERMAN=1 /D ENABLE_HUNGARIAN=1 /D ENABLE_ITALIAN=1 /D ENABLE_NORWEGIAN=1 /D ENABLE_PORTUGUESE=1 /D ENABLE_ROMANIAN=1 /D ENABLE_RUSSIAN=1 /D ENABLE_RUSSIAN_UNICODE=1 /D ENABLE_SPANISH=1 /D ENABLE_SWEDISH=1 /D ENABLE_TURKISH_UNICODE=1 /YX /FD /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "NDEBUG"
# ADD RSC /l 0x409 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /dll /machine:I386
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib php4ts.lib /nologo /dll /machine:I386 /out:"..\..\Release_TS\php_stem.dll" /libpath:"..\..\Release_TS"
# SUBTRACT LINK32 /pdb:none

!ENDIF 

# Begin Target

# Name "stem - Win32 Debug_TS"
# Name "stem - Win32 Release_TS"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\api.c
# End Source File
# Begin Source File

SOURCE=.\danish.c
# End Source File
# Begin Source File

SOURCE=.\dutch.c
# End Source File
# Begin Source File

SOURCE=.\english.c
# End Source File
# Begin Source File

SOURCE=.\finnish.c
# End Source File
# Begin Source File

SOURCE=.\french.c
# End Source File
# Begin Source File

SOURCE=.\german.c
# End Source File
# Begin Source File

SOURCE=.\hungarian.c
# End Source File
# Begin Source File

SOURCE=.\italian.c
# End Source File
# Begin Source File

SOURCE=.\norwegian.c
# End Source File
# Begin Source File

SOURCE=.\porter.c
# End Source File
# Begin Source File

SOURCE=.\portuguese.c
# End Source File
# Begin Source File

SOURCE=.\romanian.c
# End Source File
# Begin Source File

SOURCE=.\russian.c
# End Source File
# Begin Source File

SOURCE=.\russian_unicode.c
# End Source File
# Begin Source File

SOURCE=.\russian_unicode.h
# End Source File
# Begin Source File

SOURCE=.\spanish.c
# End Source File
# Begin Source File

SOURCE=.\stem.c
# End Source File
# Begin Source File

SOURCE=.\swedish.c
# End Source File
# Begin Source File

SOURCE=.\turkish_unicode.c
# End Source File
# Begin Source File

SOURCE=.\utilities.c
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\api.h
# End Source File
# Begin Source File

SOURCE=.\danish.h
# End Source File
# Begin Source File

SOURCE=.\dutch.h
# End Source File
# Begin Source File

SOURCE=.\english.h
# End Source File
# Begin Source File

SOURCE=.\finnish.h
# End Source File
# Begin Source File

SOURCE=.\french.h
# End Source File
# Begin Source File

SOURCE=.\german.h
# End Source File
# Begin Source File

SOURCE=.\header.h
# End Source File
# Begin Source File

SOURCE=.\hungarian.h
# End Source File
# Begin Source File

SOURCE=.\italian.h
# End Source File
# Begin Source File

SOURCE=.\norwegian.h
# End Source File
# Begin Source File

SOURCE=.\php_stem.h
# End Source File
# Begin Source File

SOURCE=.\porter.h
# End Source File
# Begin Source File

SOURCE=.\portuguese.h
# End Source File
# Begin Source File

SOURCE=.\romanian.h
# End Source File
# Begin Source File

SOURCE=.\russian.h
# End Source File
# Begin Source File

SOURCE=.\spanish.h
# End Source File
# Begin Source File

SOURCE=.\swedish.h
# End Source File
# Begin Source File

SOURCE=.\turkish_unicode.h
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# End Group
# End Target
# End Project
