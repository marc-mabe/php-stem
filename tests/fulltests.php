<?php

chdir(dirname(__FILE__));

function runTest($lang, $file)
{
    $lines = file($file);
    $bad   = 0;

    foreach ($lines as $i => $line) {
        list($input, $expected) = explode('=>', $line);
        $input    = trim($input);
        $expected = trim($expected);
        $stem     = stem($input, $lang);
        if ($stem != $expected) {
            echo 'L' . ($i + 1) . ': "' . $input . '" => "' . $stem . '", expected "' . $expected . '"' . PHP_EOL;
            ++$bad;
        }
    }

    print "BAD: $bad\n";
}

