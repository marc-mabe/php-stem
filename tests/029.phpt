--TEST--
Turkish (Unicode) stemming algorithm (extensive)
--SKIPIF--
<?php if (!extension_loaded("stem") || !extension_loaded("zlib") || !stem_enabled(STEM_TURKISH_UNICODE)) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("fulltests.php");

runTest(STEM_TURKISH_UNICODE, "turkish_unicode.dat", "turkish_unicode.out");

?>
--EXPECT--
BAD: 0
