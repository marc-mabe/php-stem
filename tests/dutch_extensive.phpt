--TEST--
Dutch stemming algorithm (extensive)
--SKIPIF--
<?php if (!extension_loaded("stem") || !in_array("dutch", stem_algos())) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("runfulltest.inc");

runTest("dutch", "dutch.txt");

?>
--EXPECT--
BAD: 0
