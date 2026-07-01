#include <stdio.h>

int main(){
    int arr[]= {1,3,4,-2,7,-8, 24};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<size;i++){
        if(arr[i] > 0){
            printf("%d\t", arr[i]);
        }
    }
    

}