#include <stdio.h>

int main(){
    int arr[]= {1,23,-90, 11, 37, 25};
    for(int i=0;i<6;i++){
        if(arr[i] < 0){
            printf("%d", arr[i]);
            break;
        }
    }
}