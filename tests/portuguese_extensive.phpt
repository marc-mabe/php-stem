--TEST--
Portuguese stemming algorithm (extensive)
--SKIPIF--
<?php if (!extension_loaded("stem") || !in_array("portuguese", stem_algos())) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("runfulltest.inc");

runTest("portuguese", "portuguese.txt");

?>
--EXPECT--
BAD: 0
