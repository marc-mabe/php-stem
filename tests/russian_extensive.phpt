--TEST--
Russian stemming algorithm (extensive)
--SKIPIF--
<?php if (!extension_loaded("stem") || !in_array("russian", stem_algos()) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("runfulltest.inc");

runTest("russian", "russian.txt");

?>
--EXPECT--
BAD: 0
