--TEST--
Norwegian stemming algorithm (extensive)
--SKIPIF--
<?php if (!extension_loaded("stem") || !extension_loaded("zlib") || !stem_enabled(STEM_NORWEGIAN)) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("fulltests.php");

runTest(STEM_NORWEGIAN, "norwegian.dat", "norwegian.out");

?>
--EXPECT--
BAD: 0
