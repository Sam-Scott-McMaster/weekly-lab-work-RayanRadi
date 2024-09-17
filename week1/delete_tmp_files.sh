#!/bin/bash
original_dir=$PWD
read -p "Enter the directory where u want to delete the .tmp files: " target_dir
if [ ! -d "$target_dir" ]; then
	echo "That directory does not exist."
	exit 1
fi

cd "$target_dir" || exit

echo "Deleting..."

rm -f *.tmp

cd "$original_dir" || exit

echo "Going back to original directory"
