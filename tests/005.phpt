--TEST--
Finnish stemming algorithm (extensive)
--SKIPIF--
<?php if (!extension_loaded("stem") || !extension_loaded("zlib") || !stem_enabled(STEM_FINNISH)) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("fulltests.php");

runTest(STEM_FINNISH, "finnish.dat", "finnish.out");

?>
--EXPECT--
BAD: 0
