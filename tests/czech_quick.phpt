--TEST--
Czech stemming algorithm (quick)
--SKIPIF--
<?php if (!extension_loaded("stem") || !in_array("czech", stem_algos())) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

require("runquicktest.inc");

runQuickTest("czech", "podstatné", "podstatn");
runQuickTest("czech", "jméno", "jmén");
runQuickTest("czech", "přídavné", "přídavn");
runQuickTest("czech", "jméno", "jmén");
runQuickTest("czech", "zájmeno", "zájmen");
runQuickTest("czech", "číslovka", "číslovk");
runQuickTest("czech", "sloveso", "sloves");
runQuickTest("czech", "příslovce", "příslovc");
runQuickTest("czech", "předložka", "předložk");
runQuickTest("czech", "spojka", "spojk");
runQuickTest("czech", "částice", "částic");
runQuickTest("czech", "citoslovce", "citoslovc");

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
