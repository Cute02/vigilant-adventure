#include <stdio.h>

int main(){
    int num=2, count=0;
    int arr[]= {64, 25, 12, 45, 33};
    for(int i=0;i<8;i++){
        if(arr[i]==num){
            count++;
        }
    }
    printf("Number of times %d appears in array is %d", num, count);
    return 0;
}