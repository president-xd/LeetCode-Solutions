#!/bin/bash

# Check if the file exists
if [ ! -f "file.txt" ]; then
    echo "File not found!"
    exit 1
fi

# Print the 10th line
sed -n '10p' file.txt