--TEST--
Spanish stemming algorithm (extensive)
--SKIPIF--
<?php if (!extension_loaded("stem") || !in_array("spanish", stem_algos()) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("runfulltest.inc");

runTest("spanish", "spanish.txt");

?>
--EXPECT--
BAD: 0
