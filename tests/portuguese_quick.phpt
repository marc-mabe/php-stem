--TEST--
Portuguese stemming algorithm (quick)
--SKIPIF--
<?php if (!extension_loaded("stem") || !stem_enabled(STEM_PORTUGUESE)) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("tests.php");

runQuickTest(STEM_PORTUGUESE, "abandonasse", "abandon");
runQuickTest(STEM_PORTUGUESE, "campeonatos", "campeonat");
runQuickTest(STEM_PORTUGUESE, "destituição", "destituiçã");
runQuickTest(STEM_PORTUGUESE, "infiltrações", "infiltr");

?>
--EXPECT--
abandonasse -> abandon: OK
campeonatos -> campeonat: OK
destituição -> destituiçã: OK
infiltrações -> infiltr: OK
