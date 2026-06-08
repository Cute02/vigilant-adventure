#include <stdio.h>
#include <stdlib.h>

int main(){
    int limit, i;
    printf("Enter the limit: ");
    scanf("%d", &limit);
    while(i<=limit){
        if (i%3==0 && i%5==0){
            printf("%d FIZZ BUZZ\n", i);
        }else if(i%3==0){
            printf("%d FIZZ\n", i);
        }else if(i%5==0){
            printf("%d BUZZ\n", i);
        }else{
            printf("%d\n", i);
        }
        i++;
    }
    
    
}