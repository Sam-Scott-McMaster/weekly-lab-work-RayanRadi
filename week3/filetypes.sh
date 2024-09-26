#!/bin/bash

# Check if no arguments are passed
if [ $# -eq 0 ]; then
    echo "Usage: filetypes [file or directory]" >&2
    exit 1
fi

# Loop through each argument
for item in "$@"; do
    if [ -d "$item" ]; then
        echo "directory: $item"
    elif [ -f "$item" ]; then
        echo "file: $item"
    else
        echo "unknown: $item"
    fi
done
