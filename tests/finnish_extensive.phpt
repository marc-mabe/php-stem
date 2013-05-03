--TEST--
Finnish stemming algorithm (extensive)
--SKIPIF--
<?php if (!extension_loaded("stem") || !in_array("finnish", stem_algos())) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("runfulltest.inc");

runTest("finnish", "finnish.txt");

?>
--EXPECT--
BAD: 0
