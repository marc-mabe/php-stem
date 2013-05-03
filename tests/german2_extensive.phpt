--TEST--
German stemming algorithm (extensive)
--SKIPIF--
<?php if (!extension_loaded("stem") || !in_array("german2", stem_algos()) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("runfulltest.inc");

runTest("german2", "german2.txt");

?>
--EXPECT--
BAD: 0
