#include <stdio.h>

int factorial(int number){
    if(number == 0){
        return 1;
    }
    return number * factorial(number-1);
}
int main (){
    printf("Enter the number whose factorial you want: ");
    int number;
    scanf("%d", &number);
    printf("Factorial of %d is: %d\n", number, factorial(number));

}

