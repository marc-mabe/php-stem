--TEST--
Modified English Porter stemming algorithm (quick)
--SKIPIF--
<?php if (!extension_loaded("stem") || !stem_enabled(STEM_ENGLISH)) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("tests.php");

runQuickTest(STEM_ENGLISH, "abbreviation", "abbrevi");
runQuickTest(STEM_ENGLISH, "cangrejales", "cangrejal");
runQuickTest(STEM_ENGLISH, "devised", "devis");
runQuickTest(STEM_ENGLISH, "zu", "zu");

?>
--EXPECT--
abbreviation -> abbrevi: OK
cangrejales -> cangrejal: OK
devised -> devis: OK
zu -> zu: OK
