--TEST--
Czech stemming algorithm (quick)
--SKIPIF--
<?php if (!extension_loaded("stem") || !stem_enabled(STEM_CZECH)) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("tests.php");

runQuickTest(STEM_CZECH, "podstatné", "podstatn");
runQuickTest(STEM_CZECH, "jméno", "jmén");
runQuickTest(STEM_CZECH, "přídavné", "přídavn");
runQuickTest(STEM_CZECH, "jméno", "jmén");
runQuickTest(STEM_CZECH, "zájmeno", "zájmen");
runQuickTest(STEM_CZECH, "číslovka", "číslovk");
runQuickTest(STEM_CZECH, "sloveso", "sloves");
runQuickTest(STEM_CZECH, "příslovce", "příslovc");
runQuickTest(STEM_CZECH, "předložka", "předložk");
runQuickTest(STEM_CZECH, "spojka", "spojk");
runQuickTest(STEM_CZECH, "částice", "částic");
runQuickTest(STEM_CZECH, "citoslovce", "citoslovc");

?>
--EXPECT--
podstatné -> podstatn: OK
jméno -> jmén: OK
přídavné -> přídavn: OK
jméno -> jmén: OK
zájmeno -> zájmen: OK
číslovka -> číslovk: OK
sloveso -> sloves: OK
příslovce -> příslovc: OK
předložka -> předložk: OK
spojka -> spojk: OK
částice -> částic: OK
citoslovce -> citoslovc: OK
