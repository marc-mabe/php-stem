--TEST--
Original Porter stemming algorithm (quick)
--SKIPIF--
<?php if (!extension_loaded("stem")) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("tests.php");

runQuickTest(STEM_PORTER, "abbreviated", "abbrevi");
runQuickTest(STEM_PORTER, "bohemians", "bohemian");
runQuickTest(STEM_PORTER, "gunpowder", "gunpowd");
runQuickTest(STEM_PORTER, "xi", "xi");

?>
--EXPECT--
abbreviated -> abbrevi: OK
bohemians -> bohemian: OK
gunpowder -> gunpowd: OK
xi -> xi: OK
