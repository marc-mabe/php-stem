--TEST--
Armenian stemming algorithm (quick)
--SKIPIF--
<?php if (!extension_loaded("stem") || !in_array("armenian", stem_algos())) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("runquicktest.inc");

runQuickTest("armenian", "ɑχoɾˈʒɑk", "ɑχoɾˈʒɑk");
runQuickTest("armenian", "mɑʁɑdɑˈnos", "mɑʁɑdɑˈnos");
runQuickTest("armenian", "giˈni", "giˈni");
runQuickTest("armenian", "vɑˈhɑgən", "vɑˈhɑgən");
runQuickTest("armenian", "ˈdɑʃtə", "ˈdɑʃtə");
runQuickTest("armenian", "մի՛թէ", "մի՛թէ");
runQuickTest("armenian", "մի՛գուցե", "մի՛գուցե");
runQuickTest("armenian", "ո՛րեւէ", "ո՛րեւէ");
runQuickTest("armenian", "վե՛ցերորդ", "վե՛ցերոր");
runQuickTest("armenian", "տա՛սներորդ", "տա՛սներոր");

?>
--EXPECT--
ɑχoɾˈʒɑk -> ɑχoɾˈʒɑk: OK
mɑʁɑdɑˈnos -> mɑʁɑdɑˈnos: OK
giˈni -> giˈni: OK
vɑˈhɑgən -> vɑˈhɑgən: OK
ˈdɑʃtə -> ˈdɑʃtə: OK
մի՛թէ -> մի՛թէ: OK
մի՛գուցե -> մի՛գուցե: OK
ո՛րեւէ -> ո՛րեւէ: OK
վե՛ցերորդ -> վե՛ցերոր: OK
տա՛սներորդ -> տա՛սներոր: OK

