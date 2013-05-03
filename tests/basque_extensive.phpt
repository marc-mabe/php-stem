--TEST--
Basque stemming algorithm (extensive)
--SKIPIF--
<?php if (!extension_loaded("stem") || !in_array("basque", stem_algos())) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("runfulltest.inc");

runTest("basque", "basque.txt");

?>
--EXPECT--
BAD: 0
