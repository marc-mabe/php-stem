--TEST--
Swedish stemming algorithm (extensive)
--SKIPIF--
<?php if (!extension_loaded("stem") || !stem_enabled(STEM_SWEDISH)) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("runfulltest.inc");

runTest(STEM_SWEDISH, "swedish.txt");

?>
--EXPECT--
BAD: 0
