--TEST--
Dutch stemming algorithm (extensive)
--SKIPIF--
<?php if (!extension_loaded("stem") || !extension_loaded("zlib") || !stem_enabled(STEM_DUTCH)) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("fulltests.php");

runTest(STEM_DUTCH, "dutch.dat", "dutch.out");

?>
--EXPECT--
BAD: 0
