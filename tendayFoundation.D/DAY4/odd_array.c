#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        do{
            printf("Enter the elment %d:",i+1);
            scanf("%d", &arr[i]);
            if(arr[i]%2==0){
                printf("Only odd numbers are allowed!!!!\n");
            }
        }while(arr[i]%2==0);
    }
    
}