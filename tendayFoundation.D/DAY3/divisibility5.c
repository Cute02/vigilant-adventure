#include <stdio.h>
#include <stdlib.h>

int main(){
    int limit, i=1;
    printf("Enter the limit: ");
    scanf("%d", &limit);
    do{
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
    }while(i<=limit);
    
    
}