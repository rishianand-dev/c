# !/bin/bash

# Specify the desired output file name
output_file="area_of_circle"

# Function to compile and run the C program
compile_and_run() {
    # Compile the C program
    gcc -o $output_file area_of_circle.c

    # Check if the compilation was successful
    if [ $? -eq 0 ]; then
        echo "Compilation successful. Running the program:"
        # Run the compiled program
        ./$output_file
        echo "Press enter to exit."
    else
        echo "Compilation failed."
    fi
}

# Initial compilation and execution
compile_and_run

# Use inotifywait to monitor changes in area_of_circle.c
while inotifywait -e close_write area_of_circle.c; do
    echo "Detected change in area_of_circle.c. Recompiling and running the program:"
    compile_and_run
done
