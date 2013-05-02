--TEST--
Danish stemming algorithm (extensive)
--SKIPIF--
<?php if (!extension_loaded("stem") || !stem_enabled(STEM_DANISH)) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("fulltests.php");

runTest(STEM_DANISH, "danish.dat");

?>
--EXPECT--
BAD: 0
