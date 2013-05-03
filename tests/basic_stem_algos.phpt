--TEST--
Basic functionality of stem_algos()
--SKIPIF--
<?php if (!extension_loaded("stem")) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

$algos = stem_algos();
var_dump(count($algos));
var_dump($algos[0]);

// Arguments will be irgnored
stem_algos(true, false);

?>
===Done===
--EXPECTF--
int(%d)
string(%d) "%s"
===Done===
