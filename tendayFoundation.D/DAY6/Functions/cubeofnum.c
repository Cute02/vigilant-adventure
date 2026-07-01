#include <stdio.h>

void num_cube(){
    int num;
    printf("Enter a number to find its cube: ");
    scanf("%d", &num);
    printf("The cube of %d is %d", num, num*num*num);
}
int main(){
    num_cube();
    return 0;
}