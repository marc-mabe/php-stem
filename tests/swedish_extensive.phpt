--TEST--
Swedish stemming algorithm (extensive)
--SKIPIF--
<?php if (!extension_loaded("stem") || !in_array("swedish", stem_algos()) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("runfulltest.inc");

runTest("swedish", "swedish.txt");

?>
--EXPECT--
BAD: 0
