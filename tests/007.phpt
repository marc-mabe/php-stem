--TEST--
German stemming algorithm (extensive)
--SKIPIF--
<?php if (!extension_loaded("stem") || !extension_loaded("zlib") || !stem_enabled(STEM_GERMAN)) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("tests.php");

runTest(STEM_GERMAN, "german.dat", "german.out");

?>
--EXPECT--
BAD: 0
