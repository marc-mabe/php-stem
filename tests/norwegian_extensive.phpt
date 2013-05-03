--TEST--
Norwegian stemming algorithm (extensive)
--SKIPIF--
<?php if (!extension_loaded("stem") || !in_array("norwegian", stem_algos()) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("runfulltest.inc");

runTest("norwegian", "norwegian.txt");

?>
--EXPECT--
BAD: 0
