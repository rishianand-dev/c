#include <stdio.h>

int main(){
    int list[50], minimum, maximum, size_of_list;
    printf("Program to find the minimum and maximum in a list:\n");
    printf("Enter the size of the list: ");
    scanf("%d", &size_of_list);
    for(int i= 0; i< size_of_list; i++){
        printf("\nEnter element %d: ", i);
        scanf("%d\n", &list[i]);
    }
    minimum = list[0];
    maximum = list[0];
    for(int i =0; i<size_of_list;i++){
        if(list[i]< minimum){
            minimum = list[i];
        }else{
            maximum = list[i];
        }
    }
    printf("Minimum in the list: %d\n", minimum);
    printf("Maximum in the list: %d\n", maximum);
}