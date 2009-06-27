--TEST--
Norwegian stemming algorithm (quick)
--SKIPIF--
<?php if (!extension_loaded("stem") || !stem_enabled(STEM_NORWEGIAN)) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("tests.php");

runQuickTest(STEM_NORWEGIAN, "allmennaksjeselskaper", "allmennaksjeselskap");
runQuickTest(STEM_NORWEGIAN, "datterselskaper", "datterselskap");
runQuickTest(STEM_NORWEGIAN, "driftsselskapet", "driftsselskap");
runQuickTest(STEM_NORWEGIAN, "håpløsheten", "håpløs");

?>
--EXPECT--
allmennaksjeselskaper -> allmennaksjeselskap: OK
datterselskaper -> datterselskap: OK
driftsselskapet -> driftsselskap: OK
håpløsheten -> håpløs: OK

