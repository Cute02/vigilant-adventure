#include <stdio.h>
#include <stdlib.h>
 int main() {
    int num1, num2;
    printf("Enter two intgers ");
    scanf("%d %d", &num1, num2);
    printf("The remainder of division of the numbers is %d\n", num1%num2);
    return 0;
 }