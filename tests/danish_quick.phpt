--TEST--
Danish stemming algorithm (quick)
--SKIPIF--
<?php if (!extension_loaded("stem") || !stem_enabled(STEM_DANISH)) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("tests.php");

runQuickTest(STEM_DANISH, "abarimbjergene", "abarimbjerg");
runQuickTest(STEM_DANISH, "beskyldningerne", "beskyldning");
runQuickTest(STEM_DANISH, "fredstilbudet", "fredstilbud");
runQuickTest(STEM_DANISH, "ørkesløse", "ørkesløs");

?>
--EXPECT--
abarimbjergene -> abarimbjerg: OK
beskyldningerne -> beskyldning: OK
fredstilbudet -> fredstilbud: OK
ørkesløse -> ørkesløs: OK

