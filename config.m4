dnl $Id$
dnl config.m4 for extension crap

PHP_ARG_ENABLE(stem, whether to enable stem support,
[  --enable-stem          Enable stem support]
)

if test "$PHP_STEM" != "no"; then

	if test "$MINOR_VERSION" -lt "3"; then
		PHP_EXTENSION(stem, $ext_shared)
		AC_DEFUN(PHP_NEW_EXTENSION, [])
	
	elif test "$MINOR_VERSION" -gt "2"; then
		AC_DEFINE(HAVE_STEM, 1, [ ])
		PHP_NEW_EXTENSION(stem, stem.c \
		                        api.c \
		                        utilities.c \
		                        porter.c \
		                        french.c \
		                        spanish.c \
		                        danish.c \
		                        dutch.c \
		                        english.c \
		                        german.c \
		                        italian.c \
		                        norwegian.c \
		                        portuguese.c \
		                        russian.c \
		                        swedish.c, $ext_shared,,)
	fi
fi
