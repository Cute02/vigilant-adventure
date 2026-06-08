#include <stdio.h>
#include <stdlib.h>
int main(){
    int num1, num2;
    printf("Enter two numbers to check if they are positive or negative:");
    scanf("%d %d", &num1, &num2);
    if(num1>0){
        printf("%d is positive.\n", num1);
    }else if (num1<0){
        printf("%d is negative.\n", num1);
    }
    if(num2>0){
       printf("%d is positive.\n", num2);
    }else if(num2<0){
        printf("%d is negative.\n", num2);
    }
    return 0;
}