--TEST--
French stemming algorithm (quick)
--SKIPIF--
<?php if (!extension_loaded("stem") || !stem_enabled(STEM_FRENCH)) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("tests.php");

runQuickTest(STEM_FRENCH, "abandonnez", "abandon");
runQuickTest(STEM_FRENCH, "température", "températur");
runQuickTest(STEM_FRENCH, "virtuose", "virtuos");
runQuickTest(STEM_FRENCH, "yakounines", "yakounin");

?>
--EXPECT--
abandonnez -> abandon: OK
température -> températur: OK
virtuose -> virtuos: OK
yakounines -> yakounin: OK
