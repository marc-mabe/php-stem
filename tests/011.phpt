--TEST--
Russian stemming algorithm (extensive)
--SKIPIF--
<?php if (!extension_loaded("stem") || !extension_loaded("zlib") || !stem_enabled(STEM_RUSSIAN)) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("fulltests.php");

runTest(STEM_RUSSIAN, "russian.dat", "russian.out");

?>
--EXPECT--
BAD: 0
