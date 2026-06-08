#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[]={2,4,6,8,10,12};
    int size=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=0; i<size;i++){
        sum+=arr[i];
    }
    printf("Sum of the elements in the array: %d", sum);
    
}