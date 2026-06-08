#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[]={24, 36, 60, 84, 14,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<size;i+=2){
        printf("%d\t",arr[i]);
    }
}