/*
   +----------------------------------------------------------------------+
   | Copyright (c) 2002 J Smith <dark_panda@hushmail.com>                 |
   | Snowball sources copyright (c) M.F. Porter                           |
   +----------------------------------------------------------------------+
   | Check out COPYING for the exact license.                             |
   +----------------------------------------------------------------------+

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


// Snowball headers...

#include "api.h"
#include "porter.h"
#include "english.h"
#include "french.h"
#include "spanish.h"
#include "danish.h"
#include "dutch.h"
#include "german.h"
#include "italian.h"
#include "norwegian.h"
#include "portuguese.h"
#include "russian.h"
#include "swedish.h"


PHP_MINIT_FUNCTION(stem);
PHP_MSHUTDOWN_FUNCTION(stem);
PHP_RINIT_FUNCTION(stem);
PHP_RSHUTDOWN_FUNCTION(stem);
PHP_MINFO_FUNCTION(stem);

PHP_FUNCTION(stem);
PHP_FUNCTION(stem_porter);
PHP_FUNCTION(stem_english);
PHP_FUNCTION(stem_french);
PHP_FUNCTION(stem_spanish);
PHP_FUNCTION(stem_danish);
PHP_FUNCTION(stem_dutch);
PHP_FUNCTION(stem_german);
PHP_FUNCTION(stem_italian);
PHP_FUNCTION(stem_norwegian);
PHP_FUNCTION(stem_portuguese);
PHP_FUNCTION(stem_russian);
PHP_FUNCTION(stem_swedish);

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


//void php_stem(
// int __stem(char*, char**, int);

/*
  	Declare any global variables you may need between the BEGIN
	and END macros here:

ZEND_BEGIN_MODULE_GLOBALS(stem)
	int   global_value;
	char *global_string;
ZEND_END_MODULE_GLOBALS(stem)
*/

/* In every utility function you add that needs to use variables
   in php_stem_globals, call TSRM_FETCH(); after declaring other
   variables used by that function, or better yet, pass in TSRMG_CC
   after the last function argument and declare your utility function
   with TSRMG_DC after the last declared argument.  Always refer to
   the globals in your function as STEM_G(variable).  You are
   encouraged to rename these macros something shorter, see
   examples in any other php module directory.
*/

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
