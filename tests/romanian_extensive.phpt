--TEST--
Romanian stemming algorithm (extensive)
--SKIPIF--
<?php if (!extension_loaded("stem") || !in_array("romanian", stem_algos()) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("runfulltest.inc");

runTest("romanian", "romanian.txt");

?>
--EXPECT--
BAD: 0
