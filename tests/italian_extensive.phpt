--TEST--
Italian stemming algorithm (extensive)
--SKIPIF--
<?php if (!extension_loaded("stem") || !stem_enabled(STEM_ITALIAN)) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("fulltests.php");

runTest(STEM_ITALIAN, "italian.txt");

?>
--EXPECT--
BAD: 0
