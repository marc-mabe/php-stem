<?php

function runQuickTest($lang, $incoming, $expected)
{
    $outgoing = stem($incoming, $lang);
    print "$incoming -> $outgoing: ";
    if (stem($incoming, $lang) == $expected)
    {
        print "OK\n";
        return true;
    }
    else
    {
        print "BAD\n";
        return false;
    }
}

?>
