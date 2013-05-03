--TEST--
French stemming algorithm (extensive)
--SKIPIF--
<?php if (!extension_loaded("stem") || !in_array("french", stem_algos()) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("runfulltest.inc");

runTest("french", "french.txt");

?>
--EXPECT--
BAD: 0
