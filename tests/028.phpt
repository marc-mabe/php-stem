--TEST--
Romanian stemming algorithm (extensive)
--SKIPIF--
<?php if (!extension_loaded("stem") || !extension_loaded("zlib") || !stem_enabled(STEM_ROMANIAN)) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("fulltests.php");

runTest(STEM_ROMANIAN, "romanian.dat", "romanian.out");

?>
--EXPECT--
BAD: 0
