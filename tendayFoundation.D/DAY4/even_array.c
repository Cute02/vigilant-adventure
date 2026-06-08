#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[5];
    for(int i=0; i<5; i++){
        do {
            printf("Enter an even element for position %d: ", i + 1);
            scanf("%d", &arr[i]);
            if(arr[i] % 2 != 0){
                printf("Only even numbers are allowed. Please try again.\n");
            }
        } while(arr[i] % 2 != 0);
    }
    printf("Elements in the array: ");
    for(int i=0; i<5; i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}