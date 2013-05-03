<?php

function runQuickTest($algo, $incoming, $expected)
{
    $outgoing = stem($algo, $incoming);
    print "$incoming -> $outgoing: ";
    if (stem($algo, $incoming) == $expected) {
        print "OK\n";
        return true;
    } else {
        print "BAD\n";
        return false;
    }
}

?>
