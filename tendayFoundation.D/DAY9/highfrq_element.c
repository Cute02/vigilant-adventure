#include <stdio.h>

int main(){
    int arr[] = {23, 44, 68, 23, 68, 18, 30, 68, 23};
    int size=sizeof(arr)/sizeof(arr[0]);
    int maxFreq=0, maxElement=arr[0];

    for(int i=0;i<size;i++){
        int count=0;
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>maxFreq){
            maxElement=arr[i];
        }
    }
    printf("The highest frequency element is %d. ", maxElement);
}