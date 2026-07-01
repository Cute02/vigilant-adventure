#include <stdio.h>

int main(){
    int arr[7]= {1,2,3,4,6,7,8};
    int index=4;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=index;i<7;i++){
        arr[i]=arr[i+1];
    }
    size--;
    for(int i=0; i<size;i++){
        printf("%d\t", arr[i]);
    }
}