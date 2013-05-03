--TEST--
German stemming algorithm (extensive)
--SKIPIF--
<?php if (!extension_loaded("stem") || !stem_enabled(STEM_GERMAN2)) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("fulltests.php");

runTest(STEM_GERMAN2, "german2.txt");

?>
--EXPECT--
BAD: 0
