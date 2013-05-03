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

#ifndef PHP_STEM_H
#define PHP_STEM_H

extern zend_module_entry stem_module_entry;
#define phpext_stem_ptr &stem_module_entry

#define PHP_STEM_VERSION "2.0.0-dev"

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
PHP_FUNCTION(stem_algos);

#define STEM_PORTER          "porter"
#define STEM_ENGLISH         "english"
#define STEM_FRENCH          "french"
#define STEM_SPANISH         "spanish"
#define STEM_DUTCH           "dutch"
#define STEM_DANISH          "danish"
#define STEM_GERMAN          "german"
#define STEM_ITALIAN         "italian"
#define STEM_NORWEGIAN       "norwegian"
#define STEM_PORTUGUESE      "portuguese"
#define STEM_RUSSIAN         "russian"
#define STEM_SWEDISH         "swedish"
#define STEM_FINNISH         "finnish"
#define STEM_HUNGARIAN       "hungarian"
#define STEM_ROMANIAN        "romanian"
#define STEM_TURKISH         "turkish"
#define STEM_GERMAN2         "german2"
#define STEM_ARMENIAN        "armenian"
#define STEM_BASQUE          "basque"
#define STEM_CATALAN         "catalan"
#define STEM_IRISH           "irish"
#define STEM_CZECH           "czech"

#include "porter.h"

#if ENABLE_ARMENIAN
#include "armenian.h"
#endif

#if ENABLE_BASQUE
#include "basque.h"
#endif

#if ENABLE_CATALAN
#include "catalan.h"
#endif

#if ENABLE_CZECH
#include "czech.h"
#endif

#if ENABLE_DANISH
#include "danish.h"
#endif

#if ENABLE_DUTCH
#include "dutch.h"
#endif

#if ENABLE_ENGLISH
#include "english.h"
#endif

#if ENABLE_FINNISH
#include "finnish.h"
#endif

#if ENABLE_FRENCH
#include "french.h"
#endif

#if ENABLE_GERMAN
#include "german.h"
#endif

#if ENABLE_GERMAN2
#include "german2.h"
#endif

#if ENABLE_HUNGARIAN
#include "hungarian.h"
#endif

#if ENABLE_IRISH
#include "irish.h"
#endif

#if ENABLE_ITALIAN
#include "italian.h"
#endif

#if ENABLE_NORWEGIAN
#include "norwegian.h"
#endif

#if ENABLE_PORTUGUESE
#include "portuguese.h"
#endif

#if ENABLE_ROMANIAN
#include "romanian.h"
#endif

#if ENABLE_RUSSIAN
#include "russian.h"
#endif

#if ENABLE_SPANISH
#include "spanish.h"
#endif

#if ENABLE_SWEDISH
#include "swedish.h"
#endif

#if ENABLE_TURKISH
#include "turkish.h"
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
