#!/bin/bash

# If any arguments are passed, show an error and exit
if [ $# -ne 0 ]; then
    echo "Usage: bashsplit (no arguments expected)" >&2
    exit 1
fi

# Read from standard input until EOF
while read -r line; do
    # Use 'tr' to replace spaces with newlines, effectively splitting words
    echo "$line" | tr ' ' '\n'
done
