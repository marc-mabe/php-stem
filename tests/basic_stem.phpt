--TEST--
Basic functionality of stem()
--SKIPIF--
<?php if (!extension_loaded("stem")) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php

$algo = stem_algos();
$algo = $algo[0];
var_dump(stem("test", $algo));
var_dump(stem("test"));
var_dump(stem("test", "unknown ALGO"));

?>
===Done===
--EXPECTF--
string(4) "test"

Warning: stem() expects exactly 2 parameters, 1 given in %s on line %d
NULL

Notice: stem() couldn't stem word, unknown stemming algorithm in %s on line %d
bool(false)
===Done===
