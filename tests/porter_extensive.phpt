--TEST--
Original Porter stemming algorithm (extensive)
--SKIPIF--
<?php if (!extension_loaded("stem") || !in_array("porter", stem_algos())) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("runfulltest.inc");

runTest("porter", "porter.txt");

?>
--EXPECT--
BAD: 0
