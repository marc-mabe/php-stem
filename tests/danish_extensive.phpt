--TEST--
Danish stemming algorithm (extensive)
--SKIPIF--
<?php if (!extension_loaded("stem") || !in_array("danish", stem_algos())) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("runfulltest.inc");

runTest("danish", "danish.txt");

?>
--EXPECT--
BAD: 0
