--TEST--
Spanish stemming algorithm (extensive)
--SKIPIF--
<?php if (!extension_loaded("stem") || !stem_enabled(STEM_SPANISH)) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("fulltests.php");

runTest(STEM_SPANISH, "spanish.dat", "spanish.out");

?>
--EXPECT--
BAD: 0
