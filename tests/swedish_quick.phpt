--TEST--
Swedish stemming algorithm (quick)
--SKIPIF--
<?php if (!extension_loaded("stem") || !stem_enabled(STEM_SWEDISH)) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("tests.php");

runQuickTest(STEM_SWEDISH, "alkoholister", "alkoholist");
runQuickTest(STEM_SWEDISH, "binnikemasken", "binnikemask");
runQuickTest(STEM_SWEDISH, "erfordrades", "erfordr");
runQuickTest(STEM_SWEDISH, "konstiga", "konst");

?>
--EXPECT--
alkoholister -> alkoholist: OK
binnikemasken -> binnikemask: OK
erfordrades -> erfordr: OK
konstiga -> konst: OK

