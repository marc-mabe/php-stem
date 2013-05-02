--TEST--
Swedish stemming algorithm (extensive)
--SKIPIF--
<?php if (!extension_loaded("stem") || !stem_enabled(STEM_SWEDISH)) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("fulltests.php");

runTest(STEM_SWEDISH, "swedish.dat");

?>
--EXPECT--
BAD: 0
