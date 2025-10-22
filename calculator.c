// Calculator program in c
#include <stdio.h>
int main(){
    int num1;
    int num2;
    int result;
    char operator;
    printf("Enter first Number: ");
    scanf("%d", &num1);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter second Number: ");
    scanf("%d", &num2);
    switch(operator){
        case '+':
         result = num1 + num2;
        printf("%d\n", result);
        break;
        case '-':
         result = num1 - num2;
        printf("%d\n", result);
        break;
        case '*':
         result = num1 * num2;
        printf("%d\n", result);
        break;
        case '/':
         if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                result = num1 / num2;
                printf("Result: %d\n", result);
            }
        default:
        printf("choose correct operator\n");
        break;
    }
}