--TEST--
Check for stem presence
--SKIPIF--
<?php if (!extension_loaded("stem")) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php
print "Original porter (default): assassinations -> " . stem("assassinations") . "\n";
print "English: devestating -> " . stem("devestating", STEM_ENGLISH) . "\n";
print "French: majestueusement -> " . stem("majestueusement", STEM_FRENCH) . "\n";
print "Spanish: chicharrones -> " . stem("chicharrones", STEM_SPANISH) . "\n";
print "Dutch: lichamelijkheden -> " . stem("lichamelijkheden", STEM_DUTCH) . "\n";
print "Danish: undersøgelsen -> " . stem("undersøgelsen", STEM_DANISH) . "\n";
print "German: aufeinanderschlügen -> " . stem("aufeinanderschlügen", STEM_GERMAN) . "\n";
print "Italian: pronunciamento -> " . stem("pronunciamento", STEM_ITALIAN) . "\n";
print "Norwegian: havnemyndighetene -> " . stem("havnemyndighetene", STEM_NORWEGIAN) . "\n";
print "Portuguese: quilométricas -> " . stem("quilométricas", STEM_PORTUGUESE) . "\n";
print "Swedish: klostergården -> " . stem("klostergården", STEM_SWEDISH) . "\n\n";

print "Original porter (default): assassinations -> " . stem_porter("assassinations") . "\n";
print "English: devestating -> " . stem_english("devestating") . "\n";
print "French: majestueusement -> " . stem_french("majestueusement") . "\n";
print "Spanish: chicharrones -> " . stem_spanish("chicharrones") . "\n";
print "Dutch: lichamelijkheden -> " . stem_dutch("lichamelijkheden") . "\n";
print "Danish: undersøgelsen -> " . stem_danish("undersøgelsen") . "\n";
print "German: aufeinanderschlügen -> " . stem_german("aufeinanderschlügen") . "\n";
print "Italian: pronunciamento -> " . stem_italian("pronunciamento") . "\n";
print "Norwegian: havnemyndighetene -> " . stem_norwegian("havnemyndighetene") . "\n";
print "Portuguese: quilométricas -> " . stem_portuguese("quilométricas") . "\n";
print "Swedish: klostergården -> " . stem_swedish("klostergården") . "\n";
?>
--EXPECT--
Original porter (default): assassinations -> assassin
English: devestating -> devest
French: majestueusement -> majestu
Spanish: chicharrones -> chicharron
Dutch: lichamelijkheden -> licham
Danish: undersøgelsen -> undersøg
German: aufeinanderschlügen -> aufeinanderschlüg
Italian: pronunciamento -> pronunc
Norwegian: havnemyndighetene -> havnemyndighet
Portuguese: quilométricas -> quilométr
Swedish: klostergården -> klostergård

Original porter (default): assassinations -> assassin
English: devestating -> devest
French: majestueusement -> majestu
Spanish: chicharrones -> chicharron
Dutch: lichamelijkheden -> licham
Danish: undersøgelsen -> undersøg
German: aufeinanderschlügen -> aufeinanderschlüg
Italian: pronunciamento -> pronunc
Norwegian: havnemyndighetene -> havnemyndighet
Portuguese: quilométricas -> quilométr
Swedish: klostergården -> klostergård
