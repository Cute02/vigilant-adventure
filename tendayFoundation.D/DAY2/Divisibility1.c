// fizz 3
// buzz 5
// fizzbuzz 3&5
#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    printf("Enter a number to check divisibility: ");
    scanf("%d", &num);
    if(num%3==0 && num%5==0){
        printf("FIZZ BUZZ\n");
    } else if (num%3==0){
        printf("FIZZ\n");
    } else if (num%5==0){
        printf("BUZZ\n");
    }else{
        printf("The entered number is not divisible by 3 or 5\n");
    }
    return 0;
    
}
    
    
