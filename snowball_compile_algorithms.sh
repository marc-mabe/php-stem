#! /bin/sh

CWD=`pwd`
DIR=`dirname "$0"`
ALGO="$1"

cd $DIR
SNOWBALL_BIN="../snowball/snowball/Snowball"

for file in ./snowball_algorithms/*.sbl
do
	algo=`basename ${file} .sbl`
	echo "Compile ${algo}"
	$SNOWBALL_BIN "./snowball_algorithms/${algo}.sbl" \
		-utf8 \
		-eprefix "${algo}_" \
		-r "../snowball_runtime/" \
		-o "./snowball_algorithms/${algo}"
	if [ $? -ne 0 ]; then
		echo "Failed to compile ${file} to ./snowball_algorithms/${algo}.[c|h]";
		exit $?
	fi
done
