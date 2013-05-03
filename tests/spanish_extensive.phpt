--TEST--
Spanish stemming algorithm (extensive)
--SKIPIF--
<?php if (!extension_loaded("stem") || !stem_enabled(STEM_SPANISH)) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("runfulltest.inc");

runTest(STEM_SPANISH, "spanish.txt");

?>
--EXPECT--
BAD: 0
