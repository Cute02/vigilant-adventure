#include <stdio.h>

int sumArray(int arr[], int length){
    int sum=0;
    for(int i=0;i<length;i++){
        sum+=arr[i];
    }
    return sum;

}
int main(){
    int num[5]= {10, 20, 30, 40, 50};
    int size=sizeof(num)/sizeof(num[0]);
    printf("Sum of array is %d", sumArray(num, size));
    return 0;

}