// fizz 3
// buzz 5
// fizzbuzz 3&5
#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    printf("Enter a number to check divisibility: ");
    scanf("%d", &num);
    switch (num % 3){
        case 0:
            switch (num % 5){
                case 0:
                printf("FIZZ BUZZ\n");
                break;
                default:
                printf("FIZZ\n");
                break;
            }
            break;
        default:
            switch (num % 5){
                case 0:
                printf("BUZZ\n");
                break;
                default:
                printf("The entered number is not divisible by 3 or 5\n");
                break;
            }
    }
    
    return 0;
    
}
    
    
