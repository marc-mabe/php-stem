/*
   +----------------------------------------------------------------------+
   | Copyright (c) 2002-2004 J Smith <dark_panda@hushmail.com>            |
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

#ifdef PHP_WIN32
#define PHP_STEM_API __declspec(dllexport)
#else
#define PHP_STEM_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif


// this is the extension's configuration file. You can
// disable stemming algorithms in it, if you're so inclined.

#include "stemconf.h"

// Snowball headers...

#include "api.h"
#include "porter.h"

PHP_FUNCTION(stem);
PHP_FUNCTION(stem_porter);
PHP_FUNCTION(stem_enabled);

#define STEM_DEFAULT	0x0000
#define STEM_PORTER		0x0001
#define STEM_ENGLISH	0x0002
#define STEM_FRENCH		0x0003
#define STEM_SPANISH	0x0004
#define STEM_DUTCH		0x0005
#define STEM_DANISH		0x0006
#define STEM_GERMAN		0x0007
#define STEM_ITALIAN	0x0008
#define STEM_NORWEGIAN	0x0009
#define STEM_PORTUGUESE	0x000A
#define STEM_RUSSIAN	0x000B
#define STEM_SWEDISH	0x000C
#define STEM_FINNISH	0x000D

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

#if ENABLE_RUSSIAN
#include "russian.h"
PHP_FUNCTION(stem_russian);
#endif

#if ENABLE_SPANISH
#include "spanish.h"
PHP_FUNCTION(stem_spanish);
#endif

#if ENABLE_SWEDISH
#include "swedish.h"
PHP_FUNCTION(stem_swedish);
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
