/*
   +----------------------------------------------------------------------+
   | Copyright (c) 2002-2006 J Smith <dark_panda@hushmail.com>            |
   | Snowball sources copyright (c) M.F. Porter                           |
   +----------------------------------------------------------------------+
   | Check out COPYING for the exact license.                             |
   +----------------------------------------------------------------------+

$Id$
 */

#ifndef __STEMCONF_H__
#define __STEMCONF_H__

// Here's where you can disable the algorithms.
// Set these to 1 to enable, 0 to disable. By
// default, they're all enabled. The original
// Porter stemming algorithm is always enabled.


// English -- sort of a modified Porter...

#define ENABLE_ENGLISH		1

// The rest are what they say...

#define ENABLE_DANISH		1
#define ENABLE_DUTCH		1
#define ENABLE_FINNISH		1
#define ENABLE_FRENCH		1
#define ENABLE_GERMAN		1
#define ENABLE_ITALIAN		1
#define ENABLE_NORWEGIAN	1
#define ENABLE_PORTUGUESE	1
#define ENABLE_RUSSIAN		1
#define ENABLE_RUSSIAN_UNICODE	1
#define ENABLE_SPANISH		1
#define ENABLE_SWEDISH		1

#endif
