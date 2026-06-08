#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, result=1;
    printf("Enter the number:");
    scanf("%d", &num);
    for(int i=1;i<=num; i++){
        result=result*i;
    }
    printf("Factorial of %d is %d..", num, result);
}