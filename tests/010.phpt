--TEST--
Portuguese stemming algorithm (extensive)
--SKIPIF--
<?php if (!extension_loaded("stem") || !extension_loaded("zlib") || !stem_enabled(STEM_PORTUGUESE)) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("fulltests.php");

runTest(STEM_PORTUGUESE, "portuguese.dat", "portuguese.out");

?>
--EXPECT--
BAD: 0
