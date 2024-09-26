#!/bin/bash

# Check if exactly two arguments are provided
if [ $# -ne 2 ]; then
    echo "Error: Exactly two arguments are required." >&2
    exit 1
fi

# Compare the two arguments lexicographically
if [ "$1" \< "$2" ]; then
    echo "$1"
elif [ "$1" \> "$2" ]; then
    echo "$2"
else
    echo "Error: Both arguments are the same." >&2
    exit 1
fi
