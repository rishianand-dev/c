// Reverse a string (without using strrev)

#include <stdio.h>
#include <string.h>
int main (){
    char str[100];
    printf("Enter a string: ");
    scanf("%99s", str);
    int len = strlen(str);
    int temp, i;

    for (i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    printf("Reversed string: %s\n", str);

}