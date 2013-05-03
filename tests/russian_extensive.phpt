--TEST--
Russian stemming algorithm (extensive)
--SKIPIF--
<?php if (!extension_loaded("stem") || !stem_enabled(STEM_RUSSIAN)) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("runfulltest.inc");

runTest(STEM_RUSSIAN, "russian.txt");

?>
--EXPECT--
BAD: 0
