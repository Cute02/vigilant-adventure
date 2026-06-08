#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2;
    printf("Enter Two numbers to check if they are equal:");
    scanf("%d %d", &num1, &num2);
    if(num1 == num2){
        printf("The entered numbers are equal\n");
    } else {
        printf("The entered numbers are not equal\n");
    }
    return 0;
}