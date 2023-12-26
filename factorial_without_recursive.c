#include <stdio.h>

// NON RECURSIVE WAY TO FIND FACTORIAL
int main(){
    printf("Enter the number whose factorial you want: ");
    int number, result = 1;
    scanf("%d",&number);
    for(int i = 1; i<=number; i++){
        result = result * i;
    }
    printf("Factorial of %d is: %d\n",number, result);
}

