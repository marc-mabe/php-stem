--TEST--
Turkish stemming algorithm (extensive)
--SKIPIF--
<?php if (!extension_loaded("stem") || !stem_enabled(STEM_TURKISH)) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("fulltests.php");

runTest(STEM_TURKISH, "turkish_unicode.dat", "turkish_unicode.out");

?>
--EXPECT--
BAD: 0
