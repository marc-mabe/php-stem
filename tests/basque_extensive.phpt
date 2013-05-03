--TEST--
Basque stemming algorithm (extensive)
--SKIPIF--
<?php if (!extension_loaded("stem") || !stem_enabled(STEM_BASQUE)) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("fulltests.php");

runTest(STEM_BASQUE, "basque.txt");

?>
--EXPECT--
BAD: 0
