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

#include "snowball_runtime/api.h"

PHP_FUNCTION(stem);
PHP_FUNCTION(stem_algos);

#if ENABLE_PORTER
#include "snowball_algorithms/porter.h"
#endif

#if ENABLE_ARMENIAN
#include "snowball_algorithms/armenian.h"
#endif

#if ENABLE_BASQUE
#include "snowball_algorithms/basque.h"
#endif

#if ENABLE_CATALAN
#include "snowball_algorithms/catalan.h"
#endif

#if ENABLE_CZECH
#include "snowball_algorithms/czech.h"
#endif

#if ENABLE_DANISH
#include "snowball_algorithms/danish.h"
#endif

#if ENABLE_DUTCH
#include "snowball_algorithms/dutch.h"
#endif

#if ENABLE_ENGLISH
#include "snowball_algorithms/english.h"
#endif

#if ENABLE_FINNISH
#include "snowball_algorithms/finnish.h"
#endif

#if ENABLE_FRENCH
#include "snowball_algorithms/french.h"
#endif

#if ENABLE_GERMAN
#include "snowball_algorithms/german.h"
#endif

#if ENABLE_GERMAN2
#include "snowball_algorithms/german2.h"
#endif

#if ENABLE_HUNGARIAN
#include "snowball_algorithms/hungarian.h"
#endif

#if ENABLE_IRISH
#include "snowball_algorithms/irish.h"
#endif

#if ENABLE_ITALIAN
#include "snowball_algorithms/italian.h"
#endif

#if ENABLE_NORWEGIAN
#include "snowball_algorithms/norwegian.h"
#endif

#if ENABLE_PORTUGUESE
#include "snowball_algorithms/portuguese.h"
#endif

#if ENABLE_ROMANIAN
#include "snowball_algorithms/romanian.h"
#endif

#if ENABLE_RUSSIAN
#include "snowball_algorithms/russian.h"
#endif

#if ENABLE_SPANISH
#include "snowball_algorithms/spanish.h"
#endif

#if ENABLE_SWEDISH
#include "snowball_algorithms/swedish.h"
#endif

#if ENABLE_TURKISH
#include "snowball_algorithms/turkish.h"
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
