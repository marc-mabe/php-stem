--TEST--
Hungarian stemming algorithm (extensive)
--SKIPIF--
<?php if (!extension_loaded("stem") || !extension_loaded("zlib") || !stem_enabled(STEM_HUNGARIAN)) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("fulltests.php");

runTest(STEM_HUNGARIAN, "hungarian.dat", "hungarian.out");

?>
--EXPECT--
BAD: 0
