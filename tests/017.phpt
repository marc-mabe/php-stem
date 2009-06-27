--TEST--
Dutch stemming algorithm (quick)
--SKIPIF--
<?php if (!extension_loaded("stem") || !stem_enabled(STEM_DUTCH)) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("tests.php");

runQuickTest(STEM_DUTCH, "aangekondigde", "aangekondigd");
runQuickTest(STEM_DUTCH, "aantrekkelijkheid", "aantrek");
runQuickTest(STEM_DUTCH, "bösendorferstrasse", "bosendorferstras");
runQuickTest(STEM_DUTCH, "zwitserse", "zwitser");

?>
--EXPECT--
aangekondigde -> aangekondigd: OK
aantrekkelijkheid -> aantrek: OK
bösendorferstrasse -> bosendorferstras: OK
zwitserse -> zwitser: OK

