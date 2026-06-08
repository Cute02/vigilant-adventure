#include <stdio.h>
#include <stdlib.h>
int main(){
    int num1, num2, num3;
    printf("Enter three integers:");
    scanf("%d %d %d", &num1, &num2, &num3);
    float avg=(num1+num2+num3)/3.0;
    printf("The average of three numbers is%f\n", avg);
    return 0;
}
