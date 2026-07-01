#include <stdio.h>

int main(){
    int arr[]= {1,2,33,5,36,7,8};
    int second=0, largest=arr[0];
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        if(arr[i] > largest){
            second=largest;
            largest=arr[i];
        }else if(arr[i]>second && arr[i]!=largest){
            second=arr[i];
        }

    }
    printf("%d", second);
}