--TEST--
Italian stemming algorithm (extensive)
--SKIPIF--
<?php if (!extension_loaded("stem") || !in_array("italian", stem_algos()) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("runfulltest.inc");

runTest("italian", "italian.txt");

?>
--EXPECT--
BAD: 0
