dnl $Id$
dnl config.m4 for extension crap

PHP_ARG_ENABLE(stem, whether to enable stem support,
[  --enable-stem          Enable stem support]
)

if test "$PHP_STEM" != "no"; then
	PHP_EXTENSION(stem, $ext_shared)
fi
