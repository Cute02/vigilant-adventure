#include <stdio.h>

int findMax(int arr[], int size){
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i] > max){
            max=arr[i];
        }
    }
    return max;

}
int main(){
    int num[]= {43, 7, 89, 12, 56};
    int length=sizeof(num)/sizeof(num[0]);
    printf("Maximum element: %d", findMax(num, length));

}