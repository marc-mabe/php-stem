--TEST--
Russian stemming algorithm (quick)
--SKIPIF--
<?php if (!extension_loaded("stem") || !in_array("russian", stem_algos()) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("runquicktest.inc");

runQuickTest("russian", "аксельбантами", "аксельбант");
runQuickTest("russian", "восхищаться", "восхища");
runQuickTest("russian", "выставит", "выстав");
runQuickTest("russian", "декораций", "декорац");

?>
--EXPECT--
аксельбантами -> аксельбант: OK
восхищаться -> восхища: OK
выставит -> выстав: OK
декораций -> декорац: OK
