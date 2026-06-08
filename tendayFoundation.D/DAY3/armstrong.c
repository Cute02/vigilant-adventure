#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, orginalnum, remainder, sum=0;
    printf("Enter a 3-digit number:");
    scanf("%d", &num);
    orginalnum = num;
    while(num > 0){
        remainder = num % 10;
        sum += (remainder * remainder * remainder);
        num = num / 10;

    }
    if (sum == orginalnum){
        printf("%d is an armstrong number..", orginalnum);
    } else {
        printf("%d is not an armstrong number..", orginalnum);
    }
    return 0;
}