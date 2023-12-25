#include <stdio.h>

// puts => The puts function is specifically designed for printing strings. It automatically adds a newline character ('\n') after the string, making it convenient for displaying lines of text.
// printf => Use printf when you need more control over the formatting of your output. It allows you to specify various format specifiers for different types of variables.
// gets => The gets function in C is used for reading a line of text from the standard input (usually the keyboard) and storing it in a character array. . However, it's important to note that the use of gets is discouraged due to its unsafe nature. The reason for its unsafe nature is that it doesn't perform any bounds checking, and if the input exceeds the size of the array, it can lead to buffer overflow,

int main() {
    char str[50];

    printf("Enter a string: ");
    gets(str);  // Unsafe, consider using fgets instead

    printf("You entered: ");
    puts(str);

    return 0;
}
