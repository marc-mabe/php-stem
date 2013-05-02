--TEST--
Turkish stemming algorithm (extensive)
--SKIPIF--
<?php if (!extension_loaded("stem") || !stem_enabled(STEM_TURKISH)) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("fulltests.php");

runTest(STEM_TURKISH, "turkish.dat");

?>
--EXPECT--
BAD: 0
