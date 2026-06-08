#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[]={2,4,6,8,10,1, 45, 81};
    int size=sizeof(arr)/sizeof(arr[0]);
    int i;
    do{
        printf("%d\t", arr[i]);
        i++;
    }while(i<size);
    return 0;
}
    
