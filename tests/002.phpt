--TEST--
Modified English Porter stemming algorithm (extensive)
--SKIPIF--
<?php if (!extension_loaded("stem") || !extension_loaded("zlib") || !stem_enabled(STEM_ENGLISH)) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("fulltests.php");

runTest(STEM_ENGLISH, "english.dat", "english.out");

?>
--EXPECT--
BAD: 0
