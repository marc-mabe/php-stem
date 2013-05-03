--TEST--
Danish stemming algorithm (quick)
--SKIPIF--
<?php if (!extension_loaded("stem") || !in_array("danish", stem_algos())) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("runquicktest.inc");

runQuickTest("danish", "abarimbjergene", "abarimbjerg");
runQuickTest("danish", "beskyldningerne", "beskyldning");
runQuickTest("danish", "fredstilbudet", "fredstilbud");
runQuickTest("danish", "ørkesløse", "ørkesløs");

?>
--EXPECT--
abarimbjergene -> abarimbjerg: OK
beskyldningerne -> beskyldning: OK
fredstilbudet -> fredstilbud: OK
ørkesløse -> ørkesløs: OK

