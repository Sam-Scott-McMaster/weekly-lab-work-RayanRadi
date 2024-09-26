#!/bin/bash

# If any arguments are passed, show an error and exit
if [ $# -ne 0 ]; then
    echo "Usage: bashsplit (no arguments expected)" >&2
    exit 1
fi

while read line
do
	for word in $line
	do
		echo $word
	done
done
