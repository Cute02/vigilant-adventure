#include <stdio.h>

int main(){
    int num=23,count=0;
    int rev=0, remainder;
    while(num!=0){
        remainder=num%10;
        count++;
        num=num/10;
    }
    printf("No. of digits of the number is %d", count);
}