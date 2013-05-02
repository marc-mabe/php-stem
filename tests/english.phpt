--TEST--
Modified English Porter stemming algorithm (extensive)
--SKIPIF--
<?php if (!extension_loaded("stem") || !stem_enabled(STEM_ENGLISH)) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("fulltests.php");

runTest(STEM_ENGLISH, "english.txt");

?>
--EXPECT--
BAD: 0
