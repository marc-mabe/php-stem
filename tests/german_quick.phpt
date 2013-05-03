--TEST--
German stemming algorithm (quick)
--SKIPIF--
<?php if (!extension_loaded("stem") || !in_array("german", stem_algos()) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("runquicktest.inc");

runQuickTest("german", "abenteuerspielplätzen", "abenteuerspielplatz");
runQuickTest("german", "eingefleischten", "eingefleischt");
runQuickTest("german", "kümmerlichen", "kumm");
runQuickTest("german", "weltverantwortung", "weltverantwort");

?>
--EXPECT--
abenteuerspielplätzen -> abenteuerspielplatz: OK
eingefleischten -> eingefleischt: OK
kümmerlichen -> kumm: OK
weltverantwortung -> weltverantwort: OK

