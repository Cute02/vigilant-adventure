#include <stdio.h>

int main(){
    int arr[8]= {14,27,33,94,5,7,12};
    int size=7;
    int index=7, newval=89;
    for(int i=size;i>index;i--){
        arr[i]=arr[i-1];
    }
    arr[index]=newval;
    size++;
    printf("Elements in the array...");
    for(int i=0; i<size; i++){
        printf("%d\t", arr[i]);
    }
    return 0;
}