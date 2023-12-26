#include <stdio.h>

int main(){
    printf("Please enter 2 numbers to compare:\n");
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    if(num1 > num2){
        printf("%d is greater than %d\n", num1, num2);
    }else if(num1 == num2){
        printf("%d is equal than %d\n", num1, num2);
    }
    else{
        printf("%d is greater than %d\n", num2, num1);
    }
    return 0;
}