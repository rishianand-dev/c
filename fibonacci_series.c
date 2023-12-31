#include <stdio.h>

int main (){
    int number,first = 0, second = 1, next;
    printf("Enter number to find fibonacci series: ");
    scanf("%d", &number);
    
    for(int i = 0; i < number; i++){
       printf("%d ", first);
       next = first + second;
       first = second;
       second = next;

    }
    return 0;
}