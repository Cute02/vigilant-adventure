#include <stdio.h>

void bubblesort(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp= arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d\t", arr[i]);
    }
}

int main(){
    int num[5]= {64, 34, 25, 12, 22};
    int size=sizeof(num)/sizeof(num[0]);
    bubblesort(num, size);
    printf("Sorted array: ");
    Array(num, size);
}