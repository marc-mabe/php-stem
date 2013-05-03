--TEST--
German stemming algorithm (quick)
--SKIPIF--
<?php if (!extension_loaded("stem") || !stem_enabled(STEM_GERMAN)) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("tests.php");

runQuickTest(STEM_GERMAN, "abenteuerspielplätzen", "abenteuerspielplatz");
runQuickTest(STEM_GERMAN, "eingefleischten", "eingefleischt");
runQuickTest(STEM_GERMAN, "kümmerlichen", "kumm");
runQuickTest(STEM_GERMAN, "weltverantwortung", "weltverantwort");

?>
--EXPECT--
abenteuerspielplätzen -> abenteuerspielplatz: OK
eingefleischten -> eingefleischt: OK
kümmerlichen -> kumm: OK
weltverantwortung -> weltverantwort: OK

