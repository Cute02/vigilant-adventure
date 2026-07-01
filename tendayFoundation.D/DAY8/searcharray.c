#include <stdio.h>

int main(){
    int arr[]={3, 11, 4, 1, 54, 39, 2, 5};
    int key=39;
    for(int i=0;i<8;i++){
        if(arr[i] == key){
            printf("%d", i);
            break;
        }
    }
}