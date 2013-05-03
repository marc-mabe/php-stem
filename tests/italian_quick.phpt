--TEST--
Italian stemming algorithm (quick)
--SKIPIF--
<?php if (!extension_loaded("stem") || !in_array("italian", stem_algos()) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("runquicktest.inc");

runQuickTest("italian", "azionisti", "azion");
runQuickTest("italian", "cipiglio", "cipigl");
runQuickTest("italian", "distrigarsi", "distrig");
runQuickTest("italian", "valentina", "valentin");

?>
--EXPECT--
azionisti -> azion: OK
cipiglio -> cipigl: OK
distrigarsi -> distrig: OK
valentina -> valentin: OK
