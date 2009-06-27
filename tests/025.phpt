--TEST--
Spanish stemming algorithm (quick)
--SKIPIF--
<?php if (!extension_loaded("stem") || !stem_enabled(STEM_SPANISH)) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("tests.php");

runQuickTest(STEM_SPANISH, "acercaron", "acerc");
runQuickTest(STEM_SPANISH, "chapoteaderos", "chapoteader");
runQuickTest(STEM_SPANISH, "lloraba", "llor");
runQuickTest(STEM_SPANISH, "pugilística", "pugilist");

?>
--EXPECT--
acercaron -> acerc: OK
chapoteaderos -> chapoteader: OK
lloraba -> llor: OK
pugilística -> pugilist: OK

