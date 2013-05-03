--TEST--
Dutch stemming algorithm (quick)
--SKIPIF--
<?php if (!extension_loaded("stem") || !in_array("dutch", stem_algos())) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("runquicktest.inc");

runQuickTest("dutch", "aangekondigde", "aangekondigd");
runQuickTest("dutch", "aantrekkelijkheid", "aantrek");
runQuickTest("dutch", "bösendorferstrasse", "bosendorferstras");
runQuickTest("dutch", "zwitserse", "zwitser");

?>
--EXPECT--
aangekondigde -> aangekondigd: OK
aantrekkelijkheid -> aantrek: OK
bösendorferstrasse -> bosendorferstras: OK
zwitserse -> zwitser: OK

