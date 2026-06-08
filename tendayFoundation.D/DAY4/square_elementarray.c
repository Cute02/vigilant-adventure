#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[]= {1,2,3,4,5,6,7};
    int size=sizeof(arr)/sizeof(arr[0]), square=1;
    for(int i=0;i<size;i++){
        square=arr[i]*arr[i];
        printf("%d\n", square);
    }
    
        
}