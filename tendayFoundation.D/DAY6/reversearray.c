#include <stdio.h>

void reverseArray(int arr[], int length){
    int temp;
    for(int i=0; i<length/2; i++){
        temp = arr[i];
        arr[i] = arr[length-1-i];
        arr[length-1-i] = temp;
    }

}

int main(){
    int num[] = {1, 2, 3, 4, 5};
    int size = sizeof(num)/sizeof(num[0]);
    reverseArray(num, size);
    printf("Reversed array: ");
    for(int i=0; i<size; i++)
        printf("%d ", num[i]);
    return 0;
}