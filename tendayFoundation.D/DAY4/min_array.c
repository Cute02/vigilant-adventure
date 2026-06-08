#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[]={2,4,6,8,10,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    int i, min=arr[i];
    for(i=0; i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("smallest of the elements in the array: %d", min);
    
}