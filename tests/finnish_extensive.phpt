--TEST--
Finnish stemming algorithm (extensive)
--SKIPIF--
<?php if (!extension_loaded("stem") || !stem_enabled(STEM_FINNISH)) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("runfulltest.inc");

runTest(STEM_FINNISH, "finnish.txt");

?>
--EXPECT--
BAD: 0
