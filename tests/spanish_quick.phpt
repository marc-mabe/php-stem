--TEST--
Spanish stemming algorithm (quick)
--SKIPIF--
<?php if (!extension_loaded("stem") || !in_array("spanish", stem_algos()) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("runquicktest.inc");

runQuickTest("spanish", "acercaron", "acerc");
runQuickTest("spanish", "chapoteaderos", "chapoteader");
runQuickTest("spanish", "lloraba", "llor");
runQuickTest("spanish", "pugilística", "pugilist");

?>
--EXPECT--
acercaron -> acerc: OK
chapoteaderos -> chapoteader: OK
lloraba -> llor: OK
pugilística -> pugilist: OK

