--TEST--
Turkish stemming algorithm (extensive)
--SKIPIF--
<?php if (!extension_loaded("stem") || !in_array("turkish", stem_algos()) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("runfulltest.inc");

runTest("turkish", "turkish.txt");

?>
--EXPECT--
BAD: 0
