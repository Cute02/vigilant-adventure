#include <stdio.h>
// take prime from array then the prime which is divisible by 3 remainder should be less than 2 but not 0
int main(){
    int arr[5];
    for(int i=0; i<5; i++){
        printf("Enter the element no. %d:", i+1);
        scanf("%d", &arr[i]);
    }
    
    printf("Prime numbers when divided by 3 gives remainder<=2 & remainder!=0:  ");
    for(int i=0; i<6; i++){
        int isPrime=0;
        int value=arr[i];
        if (value==1){
            isPrime=1;
        }
        for(int j=2;j<=value/2; j++){
            if(value%j==0){
                isPrime=1;
                break;
            }
        }
        
        if(isPrime==0){
            if((value%3)==1 && (value%3)!=0){
                printf("%d\t", value);
            }
        }
    }
    return 0;    
}