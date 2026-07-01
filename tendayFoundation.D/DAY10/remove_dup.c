#include <stdio.h>

int main(){
    int arr[]={1, 2, 3,1,4,5,6,2,7,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    int result[size], rSize=0;
    for(int i=0;i<size;i++){
        int isDup=0;
        for(int j=0;j<rSize;j++){
            if(arr[i]==result[j]){
                isDup=1;
                break;
            }
        }
        if(!isDup){
            result[rSize++]=arr[i];
        }
    }
    printf("After removing duplicate elements: \n");
    for(int i=0; i<rSize;i++){
        printf("%d\t", result[i]);
    }
    return 0;
}