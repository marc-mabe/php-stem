--TEST--
Modified English Porter stemming algorithm (extensive)
--SKIPIF--
<?php if (!extension_loaded("stem") || !in_array("english", stem_algos())) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("runfulltest.inc");

runTest("english", "english.txt");

?>
--EXPECT--
BAD: 0
