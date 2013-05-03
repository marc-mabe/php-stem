--TEST--
French stemming algorithm (quick)
--SKIPIF--
<?php if (!extension_loaded("stem") || !in_array("french", stem_algos()) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("runquicktest.inc");

runQuickTest("french", "abandonnez", "abandon");
runQuickTest("french", "température", "températur");
runQuickTest("french", "virtuose", "virtuos");
runQuickTest("french", "yakounines", "yakounin");

?>
--EXPECT--
abandonnez -> abandon: OK
température -> températur: OK
virtuose -> virtuos: OK
yakounines -> yakounin: OK
