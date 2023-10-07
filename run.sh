#!/bin/bash

while true; do
    # Monitor changes to your C source file (e.g., learn.c)
    inotifywait -e close_write learn.c
    
    # Compile the C program
    gcc -o learn learn.c
    
    # Run the program
    
    ./learn
done
