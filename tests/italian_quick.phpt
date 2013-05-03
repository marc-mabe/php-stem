--TEST--
Italian stemming algorithm (quick)
--SKIPIF--
<?php if (!extension_loaded("stem") || !stem_enabled(STEM_ITALIAN)) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("tests.php");

runQuickTest(STEM_ITALIAN, "azionisti", "azion");
runQuickTest(STEM_ITALIAN, "cipiglio", "cipigl");
runQuickTest(STEM_ITALIAN, "distrigarsi", "distrig");
runQuickTest(STEM_ITALIAN, "valentina", "valentin");

?>
--EXPECT--
azionisti -> azion: OK
cipiglio -> cipigl: OK
distrigarsi -> distrig: OK
valentina -> valentin: OK
