#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1;
    printf("Enter  a number to check if it is even or odd: ");
    scanf("%d", &num1);
    if (num1 % 2==0){
        printf("%d is an even number.\n", num1);
    }else{
        printf("%d is an odd number.\n", num1);
    }
    return 0;
}