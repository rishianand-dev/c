#include <stdio.h>

int main(){
    printf ('Enter a string to extract a portion of that string\n');
    char string[50], result[50];
    int start_position, number_of_characters;
    scanf("%s", &string);
    printf("Enter the starting position of the required character:\n");
    scanf("%d", &start_position);
    printf("Number of characters to be extracted: ");
    scanf("%d", &number_of_characters);


}