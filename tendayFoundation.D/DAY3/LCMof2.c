#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    int num1, num2, value;
    printf("Enter two numbers to find its LCM: ");
    scanf("%d %d", &num1, &num2);
    if(num1>num2){
        value=num1;
    }else{
        value=num2;
    }
    while(true){
        if(value%num1==0 && value%num2==0){

            break;
            
        }else{
            value++;
        }
    }
    printf("%d", value);
    return 0;
}