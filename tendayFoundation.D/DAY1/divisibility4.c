#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    printf("Enter a number to check the divisibility: ");
    scanf("%d", &num);
    if(num%3==0 || num%7==0){
        printf("The number is divisible by 3 or 7.\n");
    }else{
        printf("The number is not divisible by 3 or 7.\n");
    }
    return 0;
}