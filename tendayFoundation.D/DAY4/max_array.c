#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[]={2,4,6,8,10,12};
    int size=sizeof(arr)/sizeof(arr[0]);
    int max=0;
    for(int i=0; i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("largest of the elements in the array: %d", max);
    
}