--TEST--
Finnish stemming algorithm (extensive)
--SKIPIF--
<?php if (!extension_loaded("stem") || !stem_enabled(STEM_FINNISH)) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("fulltests.php");

runTest(STEM_FINNISH, "finnish.dat");

?>
--EXPECT--
BAD: 0
