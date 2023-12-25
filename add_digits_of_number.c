#include <stdio.h>

int main(){
    printf("Enter that number whose digits sum you want: ");
    int number, result = 0;
    scanf("%d", &number);
    while(number != 0){
        int last_digit = number % 10;
        result = result + last_digit;
        number = number / 10;
    }
    printf("\nSum of digits  is %d", result);

}