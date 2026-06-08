#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[5];
    for(int i=0; i<5;i++){
        printf("Enter the element no. %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Elements in the array:\t");
    for(int i=0; i<5; i++){
        printf("%d\t",arr[i]);
    }
}