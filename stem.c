/*
   +----------------------------------------------------------------------+
   | Copyright (c) 2002 J Smith <dark_panda@hushmail.com>                 |
   | Snowball sources copyright (c) M.F. Porter                           |
   +----------------------------------------------------------------------+
   | Check out COPYING for the exact license.                             |
   +----------------------------------------------------------------------+

 */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_ini.h"
#include "ext/standard/info.h"
#include "php_stem.h"


static int le_stem;

/* {{{ stem_functions[]
*/
function_entry stem_functions[] = {
	PHP_FE(stem,					NULL)
	PHP_FE(stem_porter,				NULL)
	PHP_FE(stem_english,			NULL)
	PHP_FE(stem_french,				NULL)
	PHP_FE(stem_spanish,			NULL)
	PHP_FE(stem_dutch,				NULL)
	PHP_FE(stem_danish,				NULL)
	PHP_FE(stem_german,				NULL)
	PHP_FE(stem_italian,			NULL)
	PHP_FE(stem_norwegian,			NULL)
	PHP_FE(stem_portuguese,			NULL)
	PHP_FE(stem_russian,			NULL)
	PHP_FE(stem_swedish,			NULL)
	{NULL, NULL, NULL}	
};
/* }}} */

/* {{{ stem_module_entry
 */
zend_module_entry stem_module_entry = {
	STANDARD_MODULE_HEADER,
	"stem",
	stem_functions,
	PHP_MINIT(stem),
	PHP_MSHUTDOWN(stem),
	NULL,
	NULL,
	PHP_MINFO(stem),
    "1.2", 
	STANDARD_MODULE_PROPERTIES
};
/* }}} */

#ifdef COMPILE_DL_STEM
ZEND_GET_MODULE(stem)
#endif

/* {{{ PHP_MINIT_FUNCTION
 */
PHP_MINIT_FUNCTION(stem)
{
	/* Just set up our constants for the PHP function stem().
	*/

	REGISTER_LONG_CONSTANT("STEM_PORTER",		STEM_PORTER,		CONST_CS | CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("STEM_ENGLISH",		STEM_ENGLISH,		CONST_CS | CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("STEM_FRENCH",		STEM_FRENCH,		CONST_CS | CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("STEM_FRANCAIS",		STEM_FRENCH,		CONST_CS | CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("STEM_SPANISH",		STEM_SPANISH,		CONST_CS | CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("STEM_ESPANOL",		STEM_SPANISH,		CONST_CS | CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("STEM_DUTCH",		STEM_DUTCH,			CONST_CS | CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("STEM_DANISH",		STEM_DANISH,		CONST_CS | CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("STEM_GERMAN",		STEM_GERMAN,		CONST_CS | CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("STEM_ITALIAN",		STEM_ITALIAN,		CONST_CS | CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("STEM_NORWEGIAN",	STEM_NORWEGIAN,		CONST_CS | CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("STEM_PORTUGUESE",	STEM_PORTUGUESE,	CONST_CS | CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("STEM_RUSSIAN",		STEM_RUSSIAN,		CONST_CS | CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("STEM_SWEDISH",		STEM_SWEDISH,		CONST_CS | CONST_PERSISTENT);

	return SUCCESS;
}
/* }}} */

/* {{{ PHP_MSHUTDOWN_FUNCTION
 */
PHP_MSHUTDOWN_FUNCTION(stem)
{
	return SUCCESS;
}
/* }}} */

/* {{{ PHP_MINFO_FUNCTION
 */
PHP_MINFO_FUNCTION(stem)
{
	php_info_print_table_start();
	php_info_print_table_header(2, "stem support", "enabled");
	php_info_print_table_row(1, "Languages Supported");
	php_info_print_table_row(2, "Original Porter", "enabled");
	php_info_print_table_row(2, "English", "enabled");
	php_info_print_table_row(2, "French", "enabled");
	php_info_print_table_row(2, "Spanish", "enabled");
	php_info_print_table_row(2, "Dutch", "enabled");
	php_info_print_table_row(2, "Danish", "enabled");
	php_info_print_table_row(2, "German", "enabled");
	php_info_print_table_row(2, "Italian", "enabled");
	php_info_print_table_row(2, "Norwegian", "enabled");
	php_info_print_table_row(2, "Portuguese", "enabled");
	php_info_print_table_row(2, "Russian", "enabled");
	php_info_print_table_row(2, "Swedish", "enabled");
	php_info_print_table_end();
}
/* }}} */


/* {{{ void php_stem(INTERNAL_FUNCTION_PARAMETERS, int lang)
   Return a stemmed string. lang is one of the language constants. By default,
   STEM_PORTER is used. Returns the stemmed word on success, false if there is
   a Snowball error. This is called from the actual PHP functions listed below.
*/
void php_stem(INTERNAL_FUNCTION_PARAMETERS, int lang)
{
	struct SN_env* z;
	struct SN_env* (*create_env)(void);
	void (*close_env)(void*);
	int (*stem)(void*);

	char* incoming;
	int len = -1;

	if (lang == STEM_DEFAULT) {
		if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "s|l", &incoming, &len, &lang) == FAILURE) {
			return;
		}
	}
	else {
		if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "s", &incoming, &len) == FAILURE) {
			return;
		}
	}

	if (len <= 0) {
		RETVAL_STRINGL(incoming, len, 1);
	}

	switch (lang)
	{
		case STEM_DEFAULT:
		case STEM_PORTER:
			create_env = (void*) porter_create_env;
			stem = (void*) porter_stem;
			close_env = (void*) porter_close_env;
		break;

		case STEM_ENGLISH:
			create_env = (void*) english_create_env;
			stem = (void*) english_stem;
			close_env = (void*) english_close_env;
		break;

		case STEM_FRENCH:
			create_env = (void*) french_create_env;
			stem = (void*) french_stem;
			close_env = (void*) french_close_env;
		break;

		case STEM_SPANISH:
			create_env = (void*) spanish_create_env;
			stem = (void*) spanish_stem;
			close_env = (void*) spanish_close_env;
		break;

		case STEM_DUTCH:
			create_env = (void*) dutch_create_env;
			stem = (void*) dutch_stem;
			close_env = (void*) dutch_close_env;
		break;

		case STEM_DANISH:
			create_env = (void*) danish_create_env;
			stem = (void*) danish_stem;
			close_env = (void*) danish_close_env;
		break;

		case STEM_GERMAN:
			create_env = (void*) german_create_env;
			stem = (void*) german_stem;
			close_env = (void*) german_close_env;
		break;

		case STEM_ITALIAN:
			create_env = (void*) italian_create_env;
			stem = (void*) italian_stem;
			close_env = (void*) italian_close_env;
		break;

		case STEM_NORWEGIAN:
			create_env = (void*) dutch_create_env;
			stem = (void*) dutch_stem;
			close_env = (void*) dutch_close_env;
		break;

		case STEM_PORTUGUESE:
			create_env = (void*) portuguese_create_env;
			stem = (void*) portuguese_stem;
			close_env = (void*) portuguese_close_env;
		break;

		case STEM_RUSSIAN:
			create_env = (void*) russian_create_env;
			stem = (void*) russian_stem;
			close_env = (void*) russian_close_env;
		break;

		case STEM_SWEDISH:
			create_env = (void*) swedish_create_env;
			stem = (void*) swedish_stem;
			close_env = (void*) swedish_close_env;
		break;

		default:
			php_error(E_NOTICE, "%s() couldn't stem word", get_active_function_name(TSRMLS_C));
			RETURN_FALSE;
	}

	z = create_env();
	SN_set_current(z, strlen(incoming), incoming);
	if (stem(z) <= 0) {
		php_error(E_NOTICE, "%s() couldn't stem word", get_active_function_name(TSRMLS_C));
		close_env(z);
		RETURN_FALSE;
	}

	z->p[z->l]= '\0';
	len = z->l;
	incoming = z->p;
	close_env(z);

	RETVAL_STRINGL(incoming, len, 1);
}
/* }}} */


/* {{{ string stem(string arg [, int lang])
   arg is a string to be stemmed, lang is the language constant listed above.
   STEM_PORTER is used by default. Returns false on Snowball error or the
   stemmed word on success.
*/
PHP_FUNCTION(stem)
{
	php_stem(INTERNAL_FUNCTION_PARAM_PASSTHRU, STEM_DEFAULT);
}
/* }}} */

/* {{{ string stem_LANG(string arg)
   arg is a string to be stemmed. The language is determined by _LANG, which
   will correspond to any of the available languages. Calling stem_LANG(string)
   is the equivalent of calling stem(string, LANG), i.e. stem_french(string) is
   equivalent to stem(string, STEM_FRENCH).
*/
PHP_FUNCTION(stem_porter)
{
	php_stem(INTERNAL_FUNCTION_PARAM_PASSTHRU, STEM_PORTER);
}

PHP_FUNCTION(stem_english)
{
	php_stem(INTERNAL_FUNCTION_PARAM_PASSTHRU, STEM_ENGLISH);
}

PHP_FUNCTION(stem_french)
{
	php_stem(INTERNAL_FUNCTION_PARAM_PASSTHRU, STEM_FRENCH);
}

PHP_FUNCTION(stem_spanish)
{
	php_stem(INTERNAL_FUNCTION_PARAM_PASSTHRU, STEM_SPANISH);
}

PHP_FUNCTION(stem_dutch)
{
	php_stem(INTERNAL_FUNCTION_PARAM_PASSTHRU, STEM_DUTCH);
}

PHP_FUNCTION(stem_danish)
{
	php_stem(INTERNAL_FUNCTION_PARAM_PASSTHRU, STEM_DANISH);
}

PHP_FUNCTION(stem_german)
{
	php_stem(INTERNAL_FUNCTION_PARAM_PASSTHRU, STEM_GERMAN);
}

PHP_FUNCTION(stem_italian)
{
	php_stem(INTERNAL_FUNCTION_PARAM_PASSTHRU, STEM_ITALIAN);
}

PHP_FUNCTION(stem_norwegian)
{
	php_stem(INTERNAL_FUNCTION_PARAM_PASSTHRU, STEM_NORWEGIAN);
}

PHP_FUNCTION(stem_portuguese)
{
	php_stem(INTERNAL_FUNCTION_PARAM_PASSTHRU, STEM_PORTUGUESE);
}

PHP_FUNCTION(stem_russian)
{
	php_stem(INTERNAL_FUNCTION_PARAM_PASSTHRU, STEM_RUSSIAN);
}

PHP_FUNCTION(stem_swedish)
{
	php_stem(INTERNAL_FUNCTION_PARAM_PASSTHRU, STEM_SWEDISH);
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
