--TEST--
Norwegian stemming algorithm (quick)
--SKIPIF--
<?php if (!extension_loaded("stem") || !in_array("norwegian", stem_algos()) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("runquicktest.inc");

runQuickTest("norwegian", "allmennaksjeselskaper", "allmennaksjeselskap");
runQuickTest("norwegian", "datterselskaper", "datterselskap");
runQuickTest("norwegian", "driftsselskapet", "driftsselskap");
runQuickTest("norwegian", "håpløsheten", "håpløs");

?>
--EXPECT--
allmennaksjeselskaper -> allmennaksjeselskap: OK
datterselskaper -> datterselskap: OK
driftsselskapet -> driftsselskap: OK
håpløsheten -> håpløs: OK

