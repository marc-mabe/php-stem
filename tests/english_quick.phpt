--TEST--
Modified English Porter stemming algorithm (quick)
--SKIPIF--
<?php if (!extension_loaded("stem") || !in_array("english", stem_algos())) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("runquicktest.inc");

runQuickTest("english", "abbreviation", "abbrevi");
runQuickTest("english", "cangrejales", "cangrejal");
runQuickTest("english", "devised", "devis");
runQuickTest("english", "zu", "zu");

?>
--EXPECT--
abbreviation -> abbrevi: OK
cangrejales -> cangrejal: OK
devised -> devis: OK
zu -> zu: OK
