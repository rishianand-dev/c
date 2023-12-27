#include <stdio.h>
#include <string.h>

int main(){
    printf ("Enter a string to extract a portion of that string\n");
    char string[50], result[50];
    int start_position, number_of_characters;
    scanf("%s", string);
    printf("Enter the starting position of the required character:\n");
    scanf("%d", &start_position);
    printf("Number of characters to be extracted: \n");
    scanf("%d", &number_of_characters);
    int length = strlen(string);
    int i, j;
    if((start_position + number_of_characters - 1) <= strlen(string)){
        for(i = start_position - 1, j = 0; i< start_position+ number_of_characters-1; i++, j++){
            result[j] = string[i];
        }
        result[j] = '\0';
        printf("%s\n", result);
    }else{
        printf("String extraction is not possible\n");
    }
    return 0;

}