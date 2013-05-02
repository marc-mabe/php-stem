--TEST--
Original Porter stemming algorithm (extensive)
--SKIPIF--
<?php if (!extension_loaded("stem")) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("fulltests.php");

runTest(STEM_PORTER, "porter.txt");

?>
--EXPECT--
BAD: 0
