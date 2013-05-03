--TEST--
Hungarian stemming algorithm (extensive)
--SKIPIF--
<?php if (!extension_loaded("stem") || !in_array("hungarian", stem_algos()) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("runfulltest.inc");

runTest("hungarian", "hungarian.txt");

?>
--EXPECT--
BAD: 0
