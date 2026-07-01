#include <stdio.h>

int main(){
    int arr[]= {1,2,3,2,1,4,6,7,1,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    int flag=0;
    for(int i=1;i<size;i++){
        for(int j=0;j<i;j++){
            if(arr[i] == arr[j]){
                printf("First repeating element is %d\n", arr[i]);
                flag=1;
                break;
            }
        }
        if(flag){
            break;
        }

    }
    if(!flag){
        printf("No repeating element found\n");
    }
    return 0;
}