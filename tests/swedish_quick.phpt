--TEST--
Swedish stemming algorithm (quick)
--SKIPIF--
<?php if (!extension_loaded("stem") || !in_array("swedish", stem_algos()) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("runquicktest.inc");

runQuickTest("swedish", "alkoholister", "alkoholist");
runQuickTest("swedish", "binnikemasken", "binnikemask");
runQuickTest("swedish", "erfordrades", "erfordr");
runQuickTest("swedish", "konstiga", "konst");

?>
--EXPECT--
alkoholister -> alkoholist: OK
binnikemasken -> binnikemask: OK
erfordrades -> erfordr: OK
konstiga -> konst: OK

