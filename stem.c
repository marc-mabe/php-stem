/*
   +----------------------------------------------------------------------+
   | Copyright (c) 2002, 2003 J Smith <dark_panda@hushmail.com>           |
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
	PHP_FE(stem,				NULL)
	PHP_FE(stem_porter,			NULL)
	PHP_FE(stem_enabled,		NULL)

	#if ENABLE_DANISH
	PHP_FE(stem_danish,			NULL)
	#endif

	#if ENABLE_DUTCH
	PHP_FE(stem_dutch,			NULL)
	#endif

	#if ENABLE_ENGLISH
	PHP_FE(stem_english,		NULL)
	#endif

	#if ENABLE_FINNISH
	PHP_FE(stem_finnish,		NULL)
	#endif

	#if ENABLE_FRENCH
	PHP_FE(stem_french,			NULL)
	#endif

	#if ENABLE_GERMAN
	PHP_FE(stem_german,			NULL)
	#endif

	#if ENABLE_ITALIAN
	PHP_FE(stem_italian,		NULL)
	#endif

	#if ENABLE_NORWEGIAN
	PHP_FE(stem_norwegian,		NULL)
	#endif

	#if ENABLE_PORTUGUESE
	PHP_FE(stem_portuguese,		NULL)
	#endif

	#if ENABLE_RUSSIAN
	PHP_FE(stem_russian,		NULL)
	#endif

	#if ENABLE_SPANISH
	PHP_FE(stem_spanish,		NULL)
	#endif

	#if ENABLE_SWEDISH
	PHP_FE(stem_swedish,		NULL)
	#endif

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
	"1.3", 
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
	// Just set up our constants for the PHP function stem().

	REGISTER_LONG_CONSTANT("STEM_PORTER",		STEM_PORTER,		CONST_CS | CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("STEM_DANISH",		STEM_DANISH,		CONST_CS | CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("STEM_DUTCH",		STEM_DUTCH,			CONST_CS | CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("STEM_ENGLISH",		STEM_ENGLISH,		CONST_CS | CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("STEM_FINNISH",		STEM_FINNISH,		CONST_CS | CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("STEM_FRENCH",		STEM_FRENCH,		CONST_CS | CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("STEM_FRANCAIS",		STEM_FRENCH,		CONST_CS | CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("STEM_GERMAN",		STEM_GERMAN,		CONST_CS | CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("STEM_ITALIAN",		STEM_ITALIAN,		CONST_CS | CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("STEM_NORWEGIAN",	STEM_NORWEGIAN,		CONST_CS | CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("STEM_PORTUGUESE",	STEM_PORTUGUESE,	CONST_CS | CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("STEM_RUSSIAN",		STEM_RUSSIAN,		CONST_CS | CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("STEM_SPANISH",		STEM_SPANISH,		CONST_CS | CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("STEM_ESPANOL",		STEM_SPANISH,		CONST_CS | CONST_PERSISTENT);
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
	php_info_print_table_header(2, "version", stem_module_entry.version);
	php_info_print_table_colspan_header(2,
	#ifdef COMPILE_DL_STEM
	"compiled as dynamic module"
	#else
	"compiled as static module"
	#endif
	);
	php_info_print_table_colspan_header(2, "Languages Supported");
	php_info_print_table_row(2, "Original Porter", 	"enabled (default)");
	php_info_print_table_row(2, "Danish", 			(ENABLE_DANISH ? "enabled" : "disabled"));
	php_info_print_table_row(2, "Dutch", 			(ENABLE_DUTCH ? "enabled" : "disabled"));
	php_info_print_table_row(2, "English", 			(ENABLE_ENGLISH ? "enabled" : "disabled"));
	php_info_print_table_row(2, "Finnish", 			(ENABLE_FINNISH ? "enabled" : "disabled"));
	php_info_print_table_row(2, "French", 			(ENABLE_FRENCH ? "enabled" : "disabled"));
	php_info_print_table_row(2, "German", 			(ENABLE_GERMAN ? "enabled" : "disabled"));
	php_info_print_table_row(2, "Italian", 			(ENABLE_ITALIAN ? "enabled" : "disabled"));
	php_info_print_table_row(2, "Norwegian", 		(ENABLE_NORWEGIAN ? "enabled" : "disabled"));
	php_info_print_table_row(2, "Portuguese", 		(ENABLE_PORTUGUESE ? "enabled" : "disabled"));
	php_info_print_table_row(2, "Russian", 			(ENABLE_RUSSIAN ? "enabled" : "disabled"));
	php_info_print_table_row(2, "Spanish", 			(ENABLE_SPANISH ? "enabled" : "disabled"));
	php_info_print_table_row(2, "Swedish", 			(ENABLE_SWEDISH ? "enabled" : "disabled"));
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
	void (*close_env)(struct SN_env*);
	int (*stem)(struct SN_env*);

	char* incoming;
	int len = -1;

	if (lang == STEM_DEFAULT) {
		if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "s|l", &incoming, &len, &lang) == FAILURE) {
			RETURN_FALSE;
		}
	}
	else {
		if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "s", &incoming, &len) == FAILURE) {
			RETURN_FALSE;
		}
	}

	if (len <= 0) {
		RETVAL_STRINGL(incoming, len, 1);
	}

	incoming = php_strtolower(incoming, strlen(incoming));

	switch (lang)
	{
		case STEM_DEFAULT:
		case STEM_PORTER:
			create_env = (struct SN_env*) porter_create_env;
			stem = (int*) porter_stem;
			close_env = (void*) porter_close_env;
		break;

		#if ENABLE_DANISH
		case STEM_DANISH:
			create_env = (struct SN_env*) danish_create_env;
			stem = (int*) danish_stem;
			close_env = (void*) danish_close_env;
		break;
		#endif

		#if ENABLE_DUTCH
		case STEM_DUTCH:
			create_env = (struct SN_env*) dutch_create_env;
			stem = (int*) dutch_stem;
			close_env = (void*) dutch_close_env;
		break;
		#endif

		#if ENABLE_ENGLISH
		case STEM_ENGLISH:
			create_env = (struct SN_env*) english_create_env;
			stem = (int*) english_stem;
			close_env = (void*) english_close_env;
		break;
		#endif

		#if ENABLE_FINNISH
		case STEM_FINNISH:
			create_env = (struct SN_env*) finnish_create_env;
			stem = (int*) finnish_stem;
			close_env = (void*) finnish_close_env;
		break;
		#endif

		#if ENABLE_FRENCH
		case STEM_FRENCH:
			create_env = (struct SN_env*) french_create_env;
			stem = (int*) french_stem;
			close_env = (void*) french_close_env;
		break;
		#endif

		#if ENABLE_GERMAN
		case STEM_GERMAN:
			create_env = (struct SN_env*) german_create_env;
			stem = (int*) german_stem;
			close_env = (void*) german_close_env;
		break;
		#endif

		#if ENABLE_ITALIAN
		case STEM_ITALIAN:
			create_env = (struct SN_env*) italian_create_env;
			stem = (int*) italian_stem;
			close_env = (void*) italian_close_env;
		break;
		#endif

		#if ENABLE_NORWEGIAN
		case STEM_NORWEGIAN:
			create_env = (struct SN_env*) norwegian_create_env;
			stem = (int*) norwegian_stem;
			close_env = (void*) norwegian_close_env;
		break;
		#endif

		#if ENABLE_PORTUGUESE
		case STEM_PORTUGUESE:
			create_env = (struct SN_env*) portuguese_create_env;
			stem = (int*) portuguese_stem;
			close_env = (void*) portuguese_close_env;
		break;
		#endif

		#if ENABLE_RUSSIAN
		case STEM_RUSSIAN:
			create_env = (struct SN_env*) russian_create_env;
			stem = (int*) russian_stem;
			close_env = (void*) russian_close_env;
		break;
		#endif

		#if ENABLE_SPANISH
		case STEM_SPANISH:
			create_env = (struct SN_env*) spanish_create_env;
			stem = (int*) spanish_stem;
			close_env = (void*) spanish_close_env;
		break;
		#endif

		#if ENABLE_SWEDISH
		case STEM_SWEDISH:
			create_env = (struct SN_env*) swedish_create_env;
			stem = (int*) swedish_stem;
			close_env = (void*) swedish_close_env;
		break;
		#endif

		default:
			php_error(E_NOTICE, "%s() couldn't stem word, stemming module not found", get_active_function_name(TSRMLS_C));
			RETURN_FALSE;
	}

	z = create_env();
	SN_set_current(z, strlen(incoming), incoming);
	stem(z);
	z->p[z->l]= '\0';
	len = z->l;
	strncpy(incoming, z->p, z->l);
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


/* {{{ bool stem_enabled(int lang)
   lang is one of the language constants. This function just returns true
   if the language is available and false if it isn't.
*/
PHP_FUNCTION(stem_enabled)
{
	int lang;

	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "l", &lang) == FAILURE) {
		RETURN_FALSE;
	}

	switch (lang)
	{
		case STEM_PORTER:

		#if ENABLE_DANISH
		case STEM_DANISH:
		#endif

		#if ENABLE_DUTCH
		case STEM_DUTCH:
		#endif

		#if ENABLE_ENGLISH
		case STEM_ENGLISH:
		#endif

		#if ENABLE_FINNISH
		case STEM_FINNISH:
		#endif

		#if ENABLE_FRENCH
		case STEM_FRENCH:
		#endif

		#if ENABLE_GERMAN
		case STEM_GERMAN:
		#endif
		
		#if ENABLE_ITALIAN
		case STEM_ITALIAN:
		#endif
		
		#if ENABLE_NORWEGIAN
		case STEM_NORWEGIAN:
		#endif
		
		#if ENABLE_PORTUGUESE
		case STEM_PORTUGUESE:
		#endif
		
		#if ENABLE_RUSSIAN
		case STEM_RUSSIAN:
		#endif

		#if ENABLE_SPANISH
		case STEM_SPANISH:
		#endif

		#if ENABLE_SWEDISH
		case STEM_SWEDISH:
		#endif

			RETURN_TRUE;
		break;

		default:
			RETURN_FALSE;
	}
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

#if ENABLE_DUTCH
PHP_FUNCTION(stem_dutch)
{
	php_stem(INTERNAL_FUNCTION_PARAM_PASSTHRU, STEM_DUTCH);
}
#endif

#if ENABLE_DANISH
PHP_FUNCTION(stem_danish)
{
	php_stem(INTERNAL_FUNCTION_PARAM_PASSTHRU, STEM_DANISH);
}
#endif

#if ENABLE_ENGLISH
PHP_FUNCTION(stem_english)
{
	php_stem(INTERNAL_FUNCTION_PARAM_PASSTHRU, STEM_ENGLISH);
}
#endif

#if ENABLE_FINNISH
PHP_FUNCTION(stem_finnish)
{
	php_stem(INTERNAL_FUNCTION_PARAM_PASSTHRU, STEM_FINNISH);
}
#endif

#if ENABLE_FRENCH
PHP_FUNCTION(stem_french)
{
	php_stem(INTERNAL_FUNCTION_PARAM_PASSTHRU, STEM_FRENCH);
}
#endif

#if ENABLE_GERMAN
PHP_FUNCTION(stem_german)
{
	php_stem(INTERNAL_FUNCTION_PARAM_PASSTHRU, STEM_GERMAN);
}
#endif

#if ENABLE_ITALIAN
PHP_FUNCTION(stem_italian)
{
	php_stem(INTERNAL_FUNCTION_PARAM_PASSTHRU, STEM_ITALIAN);
}
#endif

#if ENABLE_NORWEGIAN
PHP_FUNCTION(stem_norwegian)
{
	php_stem(INTERNAL_FUNCTION_PARAM_PASSTHRU, STEM_NORWEGIAN);
}
#endif

#if ENABLE_PORTUGUESE
PHP_FUNCTION(stem_portuguese)
{
	php_stem(INTERNAL_FUNCTION_PARAM_PASSTHRU, STEM_PORTUGUESE);
}
#endif

#if ENABLE_RUSSIAN
PHP_FUNCTION(stem_russian)
{
	php_stem(INTERNAL_FUNCTION_PARAM_PASSTHRU, STEM_RUSSIAN);
}
#endif

#if ENABLE_SPANISH
PHP_FUNCTION(stem_spanish)
{
	php_stem(INTERNAL_FUNCTION_PARAM_PASSTHRU, STEM_SPANISH);
}
#endif

#if ENABLE_SWEDISH
PHP_FUNCTION(stem_swedish)
{
	php_stem(INTERNAL_FUNCTION_PARAM_PASSTHRU, STEM_SWEDISH);
}
#endif
/* }}} */


/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: sw=4 ts=4 tw=78 fdm=marker
 * vim<600: sw=4 ts=4 tw=78
 */
