--TEST--
Italian stemming algorithm (extensive)
--SKIPIF--
<?php if (!extension_loaded("stem") || !extension_loaded("zlib") || !stem_enabled(STEM_ITALIAN)) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("tests.php");

runTest(STEM_ITALIAN, "italian.dat", "italian.out");

?>
--EXPECT--
BAD: 0
