#!/bin/bash

# Specify the desired output file name
output_file="output"
input_file="reverse_string.c"

# Function to compile and run the C program
compile_and_run() {
    # Compile the C program
    gcc -o $output_file $input_file

    # Check if the compilation was successful
    if [ $? -eq 0 ]; then
        echo "Compilation successful. Running the program:"
        # Run the compiled program
        ./$output_file
        read -p "Press enter to exit."
    else
        echo "Compilation failed."
    fi
}

# Initial compilation and execution
compile_and_run

# Use inotifywait to monitor changes in add_digits_of_number.c
while inotifywait -e close_write $input_file; do
    echo "Detected change in $input_file. Recompiling and running the program:"
    compile_and_run
done
