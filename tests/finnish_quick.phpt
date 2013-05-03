--TEST--
Finnish stemming algorithm (quick)
--SKIPIF--
<?php if (!extension_loaded("stem") || !stem_enabled(STEM_FINNISH)) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("tests.php");

runQuickTest(STEM_FINNISH, "aakkosjärjestyksessä", "aakkosjärjestyks");
runQuickTest(STEM_FINNISH, "englanninkielisellä", "englanninkielis");
runQuickTest(STEM_FINNISH, "goldbergerille", "goldberger");
runQuickTest(STEM_FINNISH, "irakilaisille", "irakilais");

?>
--EXPECT--
aakkosjärjestyksessä -> aakkosjärjestyks: OK
englanninkielisellä -> englanninkielis: OK
goldbergerille -> goldberger: OK
irakilaisille -> irakilais: OK

