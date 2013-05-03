--TEST--
Romanian stemming algorithm (extensive)
--SKIPIF--
<?php if (!extension_loaded("stem") || !stem_enabled(STEM_ROMANIAN)) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("runfulltest.inc");

runTest(STEM_ROMANIAN, "romanian.txt");

?>
--EXPECT--
BAD: 0
