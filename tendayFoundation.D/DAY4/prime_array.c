#include <stdio.h>
#include <stdlib.h>

int main(){
    int limit;
    printf("Enter the limit: ");
    scanf("%d", &limit);
    int arr[limit];
    for(int i=0;i<limit;i++){
        printf("Enter the element: ");
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < limit; i++){
        int num = arr[i];
        int isPrime = 0;

        if (num <= 1) {
            isPrime = 1;
        }else {
            for(int j = 2; j <= num / 2; j++){ // a numbber is prime only when it doesn't even 
                if (num % j == 0){ // get into this loop  or isPrime=0
                    isPrime = 1;
                    break;
                }
            }
        }

        if (isPrime==0){
            printf("%d\t", num);
            arr[i]=1;
        }else{
            arr[i]=0;
        }
        
    }
    printf("\n");
    for(int i=0; i<limit; i++){
        printf("%d\t", arr[i]);
    }
    
    printf("\n");
    return 0;
}