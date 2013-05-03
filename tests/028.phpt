--TEST--
Catalan stemming algorithm (quick)
--SKIPIF--
<?php if (!extension_loaded("stem") || !stem_enabled(STEM_CATALAN)) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("tests.php");

runQuickTest(STEM_CATALAN, "finestra", "finestr");
runQuickTest(STEM_CATALAN, "menjar", "menj");
runQuickTest(STEM_CATALAN, "matí", "mat");
runQuickTest(STEM_CATALAN, "parlar", "parl");
runQuickTest(STEM_CATALAN, "taula", "taul");
runQuickTest(STEM_CATALAN, "llevar", "llev");
runQuickTest(STEM_CATALAN, "traure", "traur");
runQuickTest(STEM_CATALAN, "cercar", "cerc");
runQuickTest(STEM_CATALAN, "colgar", "colg");
runQuickTest(STEM_CATALAN, "muller", "mull");

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