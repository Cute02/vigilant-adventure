#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, remainder,originalnum, max=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    originalnum = num;
    if(num<0){
        num=-num;
    }
    while(num!=0){
        remainder=num%10;
        num/=10;
        if(max<remainder){
            max=remainder;

        }
    }
    printf("%d is the largest digit in %d", max, originalnum);
    return 0;
}