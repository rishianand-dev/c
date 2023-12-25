#include <stdio.h>

int main()
{
    printf("Choose What you want to perform\n");
    printf("Press 1 for Addition\n");
    printf("Press 2 for Subtraction\n");
    printf("Press 3 for Multiplication\n");
    printf("Press 4 for Division\n");
    printf("Press 5 for Remainder\n");
    int operator, num1, num2, result;
    scanf("%d", &operator);

    if (operator> 0 && operator<= 5)
    {
        printf("Please enter two numbers");
        scanf("%d %d", &num1, &num2);
    }
    switch (operator)
    {
    case 1:
    {
        result = num1 + num2;
        printf("Addition of %d and %d is %d\n", num1, num2, result);
        break;
    }
    case 2:
    {
        result = num1 - num2;
        printf("Subtraction of %d and %d is %d\n", num1, num2, result);
        break;
    }
    case 3:
    {
        result = num1 * num2;
        printf("Multiplication of %d and %d is %d\n", num1, num2, result);
        break;
    }
    case 4:
    {
        result = num1 / num2;
        printf("Division of %d and %d is %f\n", num1, num2, (float)result);
        break;
    }
    case 5:
    {
        result = num1 % num2;
        printf("Remainder of %d and %d is %d\n", num1, num2, result);
        break;
    }

    default:
    {
        printf("Please enter a valid Choice\n");
        break;
    }
    }
    return 0;
}