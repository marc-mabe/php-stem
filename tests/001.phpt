--TEST--
Check for stem presence
--SKIPIF--
<?php if (!extension_loaded("stem")) print "skip"; ?>
--POST--
--GET--
--FILE--
<?php
print "Original porter (default): assassinations -> " . stem("assassinations") . "\n";
print "Danish: undersøgelsen -> " . stem("undersøgelsen", STEM_DANISH) . "\n";
print "Dutch: lichamelijkheden -> " . stem("lichamelijkheden", STEM_DUTCH) . "\n";
print "English: devestating -> " . stem("devestating", STEM_ENGLISH) . "\n";
print "Finnish: innostuneissa -> " . stem("innostuneissa", STEM_FINNISH) . "\n";
print "French: majestueusement -> " . stem("majestueusement", STEM_FRENCH) . "\n";
print "German: aufeinanderschlügen -> " . stem("aufeinanderschlügen", STEM_GERMAN) . "\n";
print "Italian: pronunciamento -> " . stem("pronunciamento", STEM_ITALIAN) . "\n";
print "Norwegian: havnemyndighetene -> " . stem("havnemyndighetene", STEM_NORWEGIAN) . "\n";
print "Portuguese: quilométricas -> " . stem("quilométricas", STEM_PORTUGUESE) . "\n";
print "Spanish: chicharrones -> " . stem("chicharrones", STEM_SPANISH) . "\n";
print "Swedish: klostergården -> " . stem("klostergården", STEM_SWEDISH) . "\n\n";

print "Original porter (default): assassinations -> " . stem_porter("assassinations") . "\n";
print "Danish: undersøgelsen -> " . stem_danish("undersøgelsen") . "\n";
print "Dutch: lichamelijkheden -> " . stem_dutch("lichamelijkheden") . "\n";
print "English: devestating -> " . stem_english("devestating") . "\n";
print "Finnish: innostuneissa -> " . stem_finnish("innostuneissa") . "\n";
print "French: majestueusement -> " . stem_french("majestueusement") . "\n";
print "German: aufeinanderschlügen -> " . stem_german("aufeinanderschlügen") . "\n";
print "Italian: pronunciamento -> " . stem_italian("pronunciamento") . "\n";
print "Norwegian: havnemyndighetene -> " . stem_norwegian("havnemyndighetene") . "\n";
print "Portuguese: quilométricas -> " . stem_portuguese("quilométricas") . "\n";
print "Spanish: chicharrones -> " . stem_spanish("chicharrones") . "\n";
print "Swedish: klostergården -> " . stem_swedish("klostergården") . "\n";
?>
--EXPECT--
Original porter (default): assassinations -> assassin
Danish: undersøgelsen -> undersøg
Dutch: lichamelijkheden -> licham
English: devestating -> devest
Finnish: innostuneissa -> innostun
French: majestueusement -> majestu
German: aufeinanderschlügen -> aufeinanderschlüg
Italian: pronunciamento -> pronunc
Norwegian: havnemyndighetene -> havnemyndighet
Portuguese: quilométricas -> quilométr
Spanish: chicharrones -> chicharron
Swedish: klostergården -> klostergård

Original porter (default): assassinations -> assassin
Danish: undersøgelsen -> undersøg
Dutch: lichamelijkheden -> licham
English: devestating -> devest
Finnish: innostuneissa -> innostun
French: majestueusement -> majestu
German: aufeinanderschlügen -> aufeinanderschlüg
Italian: pronunciamento -> pronunc
Norwegian: havnemyndighetene -> havnemyndighet
Portuguese: quilométricas -> quilométr
Spanish: chicharrones -> chicharron
Swedish: klostergården -> klostergård
