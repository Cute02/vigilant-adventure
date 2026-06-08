#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    printf("Entera number:");
    scanf("%d", &num);
    if(num>=10 && num<=50){
        printf("The number is between 10 and 50.\n");

    }else{
        printf("The number is not between 10 and 50.\n");
    }
    
    return 0;
}