#include <stdio.h>
#include <stdlib.h>
int main(){
    int rev=0;
    int remainder, num;
    printf("Enter a number to reverse it: ");
    scanf("%d", &num);
    while(num!=0){
        remainder = num%10; // take last digit
        rev=(rev*10) + remainder; 
        num=num/10;
    }
    printf("Reversed number: %d\n", rev); 
    return 0;
}