--TEST--
Armenian stemming algorithm (quick)
--SKIPIF--
<?php if (!extension_loaded("stem") || !stem_enabled(STEM_ARMENIAN)) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("tests.php");

runQuickTest(STEM_ARMENIAN, "ɑχoɾˈʒɑk", "ɑχoɾˈʒɑk");
runQuickTest(STEM_ARMENIAN, "mɑʁɑdɑˈnos", "mɑʁɑdɑˈnos");
runQuickTest(STEM_ARMENIAN, "giˈni", "giˈni");
runQuickTest(STEM_ARMENIAN, "vɑˈhɑgən", "vɑˈhɑgən");
runQuickTest(STEM_ARMENIAN, "ˈdɑʃtə", "ˈdɑʃtə");
runQuickTest(STEM_ARMENIAN, "մի՛թէ", "մի՛թէ");
runQuickTest(STEM_ARMENIAN, "մի՛գուցե", "մի՛գուցե");
runQuickTest(STEM_ARMENIAN, "ո՛րեւէ", "ո՛րեւէ");
runQuickTest(STEM_ARMENIAN, "վե՛ցերորդ", "վե՛ցերոր");
runQuickTest(STEM_ARMENIAN, "տա՛սներորդ", "տա՛սներոր");

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

