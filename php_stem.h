/*
   +----------------------------------------------------------------------+
   | Copyright (c) 2002-2006 J Smith <dark_panda@hushmail.com>            |
   | Snowball sources copyright (c) M.F. Porter                           |
   +----------------------------------------------------------------------+
   | Check out COPYING for the exact license.                             |
   +----------------------------------------------------------------------+

$Id$
*/

#ifndef PHP_STEM_H
#define PHP_STEM_H

extern zend_module_entry stem_module_entry;
#define phpext_stem_ptr &stem_module_entry

#define PHP_STEM_VERSION "1.5.1-dev"

#ifdef PHP_WIN32
#define PHP_STEM_API __declspec(dllexport)
#else
#define PHP_STEM_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

/* Snowball headers... */

#include "api.h"
#include "porter.h"

PHP_FUNCTION(stem);
PHP_FUNCTION(stem_porter);
PHP_FUNCTION(stem_enabled);

#define STEM_DEFAULT	0
#define STEM_PORTER		1
#define STEM_ENGLISH	2
#define STEM_FRENCH		3
#define STEM_SPANISH	4
#define STEM_DUTCH		5
#define STEM_DANISH		6
#define STEM_GERMAN		7
#define STEM_ITALIAN	8
#define STEM_NORWEGIAN	9
#define STEM_PORTUGUESE	10
#define STEM_RUSSIAN	11
#define STEM_SWEDISH	12
#define STEM_FINNISH	13
#define STEM_RUSSIAN_UNICODE 14
#define STEM_HUNGARIAN 15
#define STEM_ROMANIAN 16
#define STEM_TURKISH_UNICODE 17

#if ENABLE_DANISH
#include "danish.h"
PHP_FUNCTION(stem_danish);
#endif

#if ENABLE_DUTCH
#include "dutch.h"
PHP_FUNCTION(stem_dutch);
#endif

#if ENABLE_ENGLISH
#include "english.h"
PHP_FUNCTION(stem_english);
#endif

#if ENABLE_FINNISH
#include "finnish.h"
PHP_FUNCTION(stem_finnish);  
#endif

#if ENABLE_FRENCH
#include "french.h"
PHP_FUNCTION(stem_french);
#endif

#if ENABLE_GERMAN
#include "german.h"
PHP_FUNCTION(stem_german);
#endif

#if ENABLE_HUNGARIAN
#include "hungarian.h"
PHP_FUNCTION(stem_hungarian);
#endif

#if ENABLE_ITALIAN
#include "italian.h"
PHP_FUNCTION(stem_italian);
#endif

#if ENABLE_NORWEGIAN
#include "norwegian.h"
PHP_FUNCTION(stem_norwegian);
#endif

#if ENABLE_PORTUGUESE
#include "portuguese.h"
PHP_FUNCTION(stem_portuguese);
#endif

#if ENABLE_ROMANIAN
#include "romanian.h"
PHP_FUNCTION(stem_romanian);
#endif

#if ENABLE_RUSSIAN
#include "russian.h"
PHP_FUNCTION(stem_russian);
#endif

#if ENABLE_RUSSIAN_UNICODE
#include "russian_unicode.h"
PHP_FUNCTION(stem_russian_unicode);
#endif

#if ENABLE_SPANISH
#include "spanish.h"
PHP_FUNCTION(stem_spanish);
#endif

#if ENABLE_SWEDISH
#include "swedish.h"
PHP_FUNCTION(stem_swedish);
#endif

#if ENABLE_TURKISH_UNICODE
#include "turkish_unicode.h"
PHP_FUNCTION(stem_turkish_unicode);
#endif


PHP_MINIT_FUNCTION(stem);
PHP_MSHUTDOWN_FUNCTION(stem);
PHP_RINIT_FUNCTION(stem);
PHP_RSHUTDOWN_FUNCTION(stem);
PHP_MINFO_FUNCTION(stem);

#ifdef ZTS
#define STEM_G(v) TSRMG(stem_globals_id, zend_stem_globals *, v)
#else
#define STEM_G(v) (stem_globals.v)
#endif

#endif	/* PHP_STEM_H */


/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * indent-tabs-mode: t
 * End:
 */
