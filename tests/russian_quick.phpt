--TEST--
Russian stemming algorithm (quick)
--SKIPIF--
<?php if (!extension_loaded("stem") || !stem_enabled(STEM_RUSSIAN)) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("tests.php");

runQuickTest(STEM_RUSSIAN, "аксельбантами", "аксельбант");
runQuickTest(STEM_RUSSIAN, "восхищаться", "восхища");
runQuickTest(STEM_RUSSIAN, "выставит", "выстав");
runQuickTest(STEM_RUSSIAN, "декораций", "декорац");

?>
--EXPECT--
аксельбантами -> аксельбант: OK
восхищаться -> восхища: OK
выставит -> выстав: OK
декораций -> декорац: OK
