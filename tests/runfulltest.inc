<?php

chdir(dirname(__FILE__));

function runTest($algo, $file)
{
    $lines = file($file);
    $count = count($lines);
    $bad   = 0;

    for ($i = 0; $i < $count; ++$i) {
        $line = $lines[$i];
        if (trim($line) === '') {
            continue;
        }

        $line = explode(' ', $line, 2);
        if (!isset($line[1])) {
             // long words are splitted into two lines
             // the second line begins with whitespaces
             if ($lines[$i+1][0] === ' ') {
                 $line[1] = $lines[++$i];
             // else the expected word is an empty string
             } else {
                 $line[1] = '';
             }
        }

        list($input, $expected) = $line;
        $input    = trim($input);
        $expected = trim($expected);
        $stem     = stem($input, $algo);
        if ($stem != $expected) {
            echo 'L' . ($i + 1) . ': "' . $input . '" => "' . $stem . '", expected "' . $expected . '"' . PHP_EOL;
            ++$bad;
        }
    }

    print "BAD: $bad\n";
}

