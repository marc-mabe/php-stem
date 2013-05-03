--TEST--
Finnish stemming algorithm (quick)
--SKIPIF--
<?php if (!extension_loaded("stem") || !in_array("finnish", stem_algos()) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("runquicktest.inc");

runQuickTest("finnish", "aakkosjärjestyksessä", "aakkosjärjestyks");
runQuickTest("finnish", "englanninkielisellä", "englanninkielis");
runQuickTest("finnish", "goldbergerille", "goldberger");
runQuickTest("finnish", "irakilaisille", "irakilais");

?>
--EXPECT--
aakkosjärjestyksessä -> aakkosjärjestyks: OK
englanninkielisellä -> englanninkielis: OK
goldbergerille -> goldberger: OK
irakilaisille -> irakilais: OK

