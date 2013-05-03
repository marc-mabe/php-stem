/*
  +----------------------------------------------------------------------+
  | PHP Version 5                                                        |
  +----------------------------------------------------------------------+
  | Copyright (c) 2002-2009 The PHP Group                                |
  +----------------------------------------------------------------------+
  | This source file is subject to version 3.01 of the PHP license,      |
  | that is bundled with this package in the file LICENSE, and is        |
  | available through the world-wide-web at the following url:           |
  | http://www.php.net/license/3_01.txt.                                 |
  | If you did not receive a copy of the PHP license and are unable to   |
  | obtain it through the world-wide-web, please send a note to          |
  | license@php.net so we can mail you a copy immediately.               |
  +----------------------------------------------------------------------+
  | Snowball sources copyright (c) M.F. Porter                           |
  +----------------------------------------------------------------------+
  | Author: Jay Smith     <jay@php.net>                                  |
  |         Olivier Hill  <ohill@php.net>                                |
  +----------------------------------------------------------------------+
*/

/* $Id$ */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_ini.h"
#include "ext/standard/info.h"
#include "php_stem.h"

/* {{{ stem_functions[]
*/
zend_function_entry stem_functions[] = {
	PHP_FE(stem,				NULL)
	PHP_FE(stem_algos,		NULL)
	{NULL, NULL, NULL}	
};
/* }}} */

/* {{{ stem_module_entry
 */
zend_module_entry stem_module_entry = {
	STANDARD_MODULE_HEADER,
	"stem",
	stem_functions,
	NULL,
	NULL,
	NULL,
	NULL,
	PHP_MINFO(stem),
	PHP_STEM_VERSION,
	STANDARD_MODULE_PROPERTIES
};
/* }}} */

#ifdef COMPILE_DL_STEM
ZEND_GET_MODULE(stem)
#endif

/* {{{ PHP_MINFO_FUNCTION
 */
PHP_MINFO_FUNCTION(stem)
{
	php_info_print_table_start();
	php_info_print_table_header(2, "stem support", "enabled");
	php_info_print_table_row(2, "version", PHP_STEM_VERSION);
#ifdef COMPILE_DL_STEM
	php_info_print_table_colspan_header(2, "compiled as dynamic module");
#else
	php_info_print_table_colspan_header(2, "compiled as static module");
#endif
	php_info_print_table_colspan_header(2, "Languages Supported");

#define STEMMER(php_func, c_func, constant, name) \
	php_info_print_table_row(2, # name, "enabled");
#include "stemmers.def"
#undef STEMMER

	php_info_print_table_end();
}
/* }}} */

/* {{{ string stem(string word, string algo)
   word is a string to be stemmed, algo is the stemming algorithm to be used.
   Returns false on Snowball error or the stemmed word on success.
*/
PHP_FUNCTION(stem)
{
        struct SN_env* z;
        struct SN_env* (*create_env)(void);
        void (*close_env)(struct SN_env*);
        int (*stem)(struct SN_env*);
        
        char * word;
        char * algo;
        int word_len;
        int algo_len;
	short int algo_found = 0;

        if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "ss", &word, &word_len, &algo, &algo_len) == FAILURE) {
                return;
        }

        /* Empty string */
        if (word_len <= 0) {
                RETURN_STRINGL(word, word_len, 1);
        }

#ifdef PHP_WIN32
#define INIT_FUNCS(x) \
	create_env = (struct SN_env*) x ## _create_env; \
	stem = (int*) x ## _stem; \
	close_env = (void*) x ## _close_env;
#else
#define INIT_FUNCS(x) \
	create_env = x ## _create_env; \
	stem = x ## _stem; \
	close_env = x ## _close_env;
#endif
#define STEMMER(php_func, c_func, constant, name) \
        if (strcmp(name, algo) == 0) { \
                INIT_FUNCS(c_func) \
		algo_found = 1; \
        }
#include "stemmers.def"
#undef STEMMER
#undef INIT_FUNCS

        // TODO
        if (algo_found == 0) {
                php_error(E_NOTICE, "%s() couldn't stem word, unknown stemming algorithm", get_active_function_name(TSRMLS_C));
                RETURN_FALSE;
        }

        z = create_env();
        SN_set_current(z, word_len, word);
        php_strtolower(z->p, word_len);
        stem(z);
        z->p[z->l]= '\0';

        RETVAL_STRINGL(z->p, z->l, 1);
        close_env(z);
}
/* }}} */

/* {{{ proto array stem_algos(void)
Return a list of registered stemming algorithms */
PHP_FUNCTION(stem_algos)
{
        array_init(return_value);
#       define STEMMER(php_func, c_func, constant, name) \
                add_next_index_stringl(return_value, name, sizeof(name)-1, 1);
#               include "stemmers.def"
#       undef STEMMER
}
/* }}} */


/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: sw=4 ts=4 tw=78 fdm=marker
 * vim<600: sw=4 ts=4 tw=78
 */
