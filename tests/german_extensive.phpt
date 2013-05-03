--TEST--
German stemming algorithm (extensive)
--SKIPIF--
<?php if (!extension_loaded("stem") || !in_array("german", stem_algos()) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("runfulltest.inc");

runTest("german", "german.txt");

?>
--EXPECT--
BAD: 0
