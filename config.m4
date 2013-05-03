dnl $Id$
dnl config.m4 for extension stem

PHP_ARG_ENABLE(stem, whether to enable stem support,
  [  --enable-stem            Enable stem support], no)
PHP_ARG_ENABLE(stem-armenian, whether to compile Armenian stemming algorithm,
  [  --enable-stem-armenian   Whether to compile Armenian stemming algorithm], yes, no)
PHP_ARG_ENABLE(stem-basque, whether to compile Basque stemming algorithm,
  [  --enable-stem-basque     Whether to compile Basque stemming algorithm], yes, no)
PHP_ARG_ENABLE(stem-catalan, whether to compile Catalan stemming algorithm,
  [  --enable-stem-catalan    Whether to compile Catalan stemming algorithm], yes, no)
PHP_ARG_ENABLE(stem-czech, whether to compile Czech stemming algorithm,
  [  --enable-stem-czech      Whether to compile Czech stemming algorithm], yes, no)
PHP_ARG_ENABLE(stem-danish, whether to compile Danish stemming algorithm,
  [  --enable-stem-danish     Whether to compile Danish stemming algorithm], yes, no)
PHP_ARG_ENABLE(stem-dutch, whether to compile Dutch stemming algorithm,
  [  --enable-stem-dutch      Whether to compile Dutch stemming algorithm], yes, no)
PHP_ARG_ENABLE(stem-english, whether to compile English (non Porter) stemming algorithm,
  [  --enable-stem-english    Whether to compile English (non Porter) stemming algorithm], yes, no)
PHP_ARG_ENABLE(stem-french, whether to compile French stemming algorithm,
  [  --enable-stem-french     Whether to compile French stemming algorithm], yes, no)
PHP_ARG_ENABLE(stem-finnish, whether to compile Finnish stemming algorithm,
  [  --enable-stem-finnish    Whether to compile Finnish stemming algorithm], yes, no)
PHP_ARG_ENABLE(stem-german, whether to compile German stemming algorithm,
  [  --enable-stem-german     Whether to compile German stemming algorithm], yes, no)
PHP_ARG_ENABLE(stem-german2, whether to compile German2 stemming algorithm,
  [  --enable-stem-german2    Whether to compile German2 stemming algorithm], yes, no)
PHP_ARG_ENABLE(stem-hungarian, whether to compile Hungarian stemming algorithm,
  [  --enable-stem-hungarian  Whether to compile Hungarian stemming algorithm], yes, no)
PHP_ARG_ENABLE(stem-irish, whether to compile Irish stemming algorithm,
  [  --enable-stem-irish      Whether to compile Irish stemming algorithm], yes, no)
PHP_ARG_ENABLE(stem-italian, whether to compile Italian stemming algorithm,
  [  --enable-stem-italian    Whether to compile Italian stemming algorithm], yes, no)
PHP_ARG_ENABLE(stem-norwegian, whether to compile Norwegian stemming algorithm,
  [  --enable-stem-norwegian  Whether to compile Norwegian stemming algorithm], yes, no)
PHP_ARG_ENABLE(stem-porter, whether to compile the original porter stemming algorithm,
  [  --enable-stem-porter     Whether to compile the original porter stemming algorithm], yes, no)
PHP_ARG_ENABLE(stem-portuguese, whether to compile Portuguese stemming algorithm,
  [  --enable-stem-portuguese Whether to compile Portuguese stemming algorithm], yes, no)
PHP_ARG_ENABLE(stem-romanian, whether to compile Romanian stemming algorithm,
  [  --enable-stem-romanian   Whether to compile Romanian stemming algorithm], yes, no)
PHP_ARG_ENABLE(stem-russian, whether to compile Russian stemming algorithm,
  [  --enable-stem-russian    Whether to compile Russian stemming algorithm], yes, no)
PHP_ARG_ENABLE(stem-spanish, whether to compile Spanish stemming algorithm,
  [  --enable-stem-spanish    Whether to compile Spanish stemming algorithm], yes, no)
PHP_ARG_ENABLE(stem-swedish, whether to compile Swedish stemming algorithm,
  [  --enable-stem-swedish    Whether to compile Swedish stemming algorithm], yes, no)
PHP_ARG_ENABLE(stem-turkish, whether to compile Turkish  stemming algorithm,
  [  --enable-stem-turkish    Whether to compile Turkish stemming algorithm], yes, no)


if test "$PHP_STEM_ARMENIAN" = "yes"; then
    AC_DEFINE(ENABLE_ARMENIAN, 1, [ ])
    extra_lang="$extra_lang armenian.c"
  else
    AC_DEFINE(ENABLE_ARMENIAN, 0, [ ])
  fi

if test "$PHP_STEM_BASQUE" = "yes"; then
    AC_DEFINE(ENABLE_BASQUE, 1, [ ])
    extra_lang="$extra_lang basque.c"
  else
    AC_DEFINE(ENABLE_BASQUE, 0, [ ])
  fi

if test "$PHP_STEM_CATALAN" = "yes"; then
    AC_DEFINE(ENABLE_CATALAN, 1, [ ])
    extra_lang="$extra_lang catalan.c"
  else
    AC_DEFINE(ENABLE_CATALAN, 0, [ ])
  fi

if test "$PHP_STEM_CZECH" = "yes"; then
    AC_DEFINE(ENABLE_CZECH, 1, [ ])
    extra_lang="$extra_lang czech.c"
  else
    AC_DEFINE(ENABLE_CZECH, 0, [ ])
  fi

if test "$PHP_STEM_DANISH" = "yes"; then
    AC_DEFINE(ENABLE_DANISH, 1, [ ])
    extra_lang="$extra_lang danish.c"
  else
    AC_DEFINE(ENABLE_DANISH, 0, [ ])
  fi

if test "$PHP_STEM_DUTCH" = "yes"; then
    AC_DEFINE(ENABLE_DUTCH, 1, [ ])
    extra_lang="$extra_lang dutch.c"
  else
    AC_DEFINE(ENABLE_DUTCH, 0, [ ])
  fi

if test "$PHP_STEM_ENGLISH" = "yes"; then
    AC_DEFINE(ENABLE_ENGLISH, 1, [ ])
    extra_lang="$extra_lang english.c"
  else
    AC_DEFINE(ENABLE_ENGLISH, 0, [ ])
  fi

if test "$PHP_STEM_FRENCH" = "yes"; then
    AC_DEFINE(ENABLE_FRENCH, 1, [ ])
    extra_lang="$extra_lang french.c"
  else
    AC_DEFINE(ENABLE_FRENCH, 0, [ ])
  fi

if test "$PHP_STEM_FINNISH" = "yes"; then
    AC_DEFINE(ENABLE_FINNISH, 1, [ ])
    extra_lang="$extra_lang finnish.c"
  else
    AC_DEFINE(ENABLE_FINNISH, 0, [ ])
  fi

if test "$PHP_STEM_GERMAN" = "yes"; then
    AC_DEFINE(ENABLE_GERMAN, 1, [ ])
    extra_lang="$extra_lang german.c"
  else
    AC_DEFINE(ENABLE_GERMAN, 0, [ ])
  fi

if test "$PHP_STEM_GERMAN2" = "yes"; then
    AC_DEFINE(ENABLE_GERMAN2, 1, [ ])
    extra_lang="$extra_lang german2.c"
  else
    AC_DEFINE(ENABLE_GERMAN2, 0, [ ])
  fi

if test "$PHP_STEM_HUNGARIAN" = "yes"; then
    AC_DEFINE(ENABLE_HUNGARIAN, 1, [ ])
    extra_lang="$extra_lang hungarian.c"
  else
    AC_DEFINE(ENABLE_HUNGARIAN, 0, [ ])
  fi

if test "$PHP_STEM_IRISH" = "yes"; then
    AC_DEFINE(ENABLE_IRISH, 1, [ ])
    extra_lang="$extra_lang irish.c"
  else
    AC_DEFINE(ENABLE_IRISH, 0, [ ])
  fi

if test "$PHP_STEM_ITALIAN" = "yes"; then
    AC_DEFINE(ENABLE_ITALIAN, 1, [ ])
    extra_lang="$extra_lang italian.c"
  else
    AC_DEFINE(ENABLE_ITALIAN, 0, [ ])
  fi

if test "$PHP_STEM_NORWEGIAN" = "yes"; then
    AC_DEFINE(ENABLE_NORWEGIAN, 1, [ ])
    extra_lang="$extra_lang norwegian.c"
  else
    AC_DEFINE(ENABLE_NORWEGIAN, 0, [ ])
  fi

if test "$PHP_STEM_PORTUGUESE" = "yes"; then
    AC_DEFINE(ENABLE_PORTUGUESE, 1, [ ])
    extra_lang="$extra_lang portuguese.c"
  else
    AC_DEFINE(ENABLE_PORTUGUESE, 0, [ ])
  fi

if test "$PHP_STEM_ROMANIAN" = "yes"; then
    AC_DEFINE(ENABLE_ROMANIAN, 1, [ ])
    extra_lang="$extra_lang romanian.c"
  else
    AC_DEFINE(ENABLE_ROMANIAN, 0, [ ])
  fi

if test "$PHP_STEM_RUSSIAN" = "yes"; then
    AC_DEFINE(ENABLE_RUSSIAN, 1, [ ])
    extra_lang="$extra_lang russian.c"
  else
    AC_DEFINE(ENABLE_RUSSIAN, 0, [ ])
  fi

if test "$PHP_STEM_SPANISH" = "yes"; then
    AC_DEFINE(ENABLE_SPANISH, 1, [ ])
    extra_lang="$extra_lang spanish.c"
  else
    AC_DEFINE(ENABLE_SPANISH, 0, [ ])
  fi

if test "$PHP_STEM_SWEDISH" = "yes"; then
    AC_DEFINE(ENABLE_SWEDISH, 1, [ ])
    extra_lang="$extra_lang swedish.c"
  else
    AC_DEFINE(ENABLE_SWEDISH, 0, [ ])
  fi

if test "$PHP_STEM_TURKISH" = "yes"; then
    AC_DEFINE(ENABLE_TURKISH, 1, [ ])
    extra_lang="$extra_lang turkish.c"
  else
    AC_DEFINE(ENABLE_TURKISH, 0, [ ])
  fi

if test "$PHP_STEM" != "no"; then
    PHP_NEW_EXTENSION(stem, stem.c api.c utilities.c porter.c $extra_lang, $ext_shared)
fi
