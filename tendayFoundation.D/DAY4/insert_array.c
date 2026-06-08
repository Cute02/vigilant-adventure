#include <stdio.h>

int main(){
    int index=2, newvalue=55;

    int arr[] = {1, 2,3 ,4,5,6,7};
    int size=7;
    for(int i=size-1; i>index; i--){
        arr[i] = arr[i-1];

    }
    arr[index]=newvalue;
    size++;
    printf("%d", arr[1]);
}
