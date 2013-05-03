--TEST--
Catalan stemming algorithm (quick)
--SKIPIF--
<?php if (!extension_loaded("stem") || !in_array("catalan", stem_algos())) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("runquicktest.inc");

runQuickTest("catalan", "finestra", "finestr");
runQuickTest("catalan", "menjar", "menj");
runQuickTest("catalan", "matí", "mat");
runQuickTest("catalan", "parlar", "parl");
runQuickTest("catalan", "taula", "taul");
runQuickTest("catalan", "llevar", "llev");
runQuickTest("catalan", "traure", "traur");
runQuickTest("catalan", "cercar", "cerc");
runQuickTest("catalan", "colgar", "colg");
runQuickTest("catalan", "muller", "mull");

?>
--EXPECT--
finestra -> finestr: OK
menjar -> menj: OK
matí -> mat: OK
parlar -> parl: OK
taula -> taul: OK
llevar -> llev: OK
traure -> traur: OK
cercar -> cerc: OK
colgar -> colg: OK
muller -> mull: OK
