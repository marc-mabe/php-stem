--TEST--
Original Porter stemming algorithm (quick)
--SKIPIF--
<?php if (!extension_loaded("stem") || !in_array("porter", stem_algos())) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("runquicktest.inc");

runQuickTest("porter", "abbreviated", "abbrevi");
runQuickTest("porter", "bohemians", "bohemian");
runQuickTest("porter", "gunpowder", "gunpowd");
runQuickTest("porter", "xi", "xi");

?>
--EXPECT--
abbreviated -> abbrevi: OK
bohemians -> bohemian: OK
gunpowder -> gunpowd: OK
xi -> xi: OK
