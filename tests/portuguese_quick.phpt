--TEST--
Portuguese stemming algorithm (quick)
--SKIPIF--
<?php if (!extension_loaded("stem") || !in_array("portuguese", stem_algos()) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("runquicktest.inc");

runQuickTest("portuguese", "abandonasse", "abandon");
runQuickTest("portuguese", "campeonatos", "campeonat");
runQuickTest("portuguese", "destituição", "destituiçã");
runQuickTest("portuguese", "infiltrações", "infiltr");

?>
--EXPECT--
abandonasse -> abandon: OK
campeonatos -> campeonat: OK
destituição -> destituiçã: OK
infiltrações -> infiltr: OK
