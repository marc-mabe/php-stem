<?php

chdir(dirname(realpath($_SERVER['PHP_SELF'])));

function runTest($lang, $in, $out, $gz = true)
{
    if ($gz)
    {
        $in = gzfile("$in.gz");
        $out = gzfile("$out.gz");
    }
    else
    {
        $in = file($in);
        $out = file($out);
    }
    $bad = 0;

    for ($i = 0; $i < count($in); $i++)
    {
        $in[$i] = trim($in[$i]);
        $out[$i] = trim($out[$i]);

        if (stem($in[$i], $lang) != $out[$i])
        {
            print "|" . $in[$i] . "| -> |" . stem($in[$i], $lang) . "|, expected |" . $out[$i] . "|\n";
            ++$bad;
        }
    }

    print "BAD: $bad\n";
}

?>
