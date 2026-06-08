#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    if(num%2==0 && num%5==0){
        printf("The number is divisible by 2 and 5.\n");

    }else{
        printf("The number is not divisible by both 2 and 5.\n");
    }
    
    return 0;
}