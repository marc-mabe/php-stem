--TEST--
Portuguese stemming algorithm (extensive)
--SKIPIF--
<?php if (!extension_loaded("stem") || !stem_enabled(STEM_PORTUGUESE)) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("fulltests.php");

runTest(STEM_PORTUGUESE, "portuguese.dat");

?>
--EXPECT--
BAD: 0
