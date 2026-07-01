#include <stdio.h>

int binarySearch(int arr[], int low,int high, int target){
    if(low>high){
        return -1;
    }
    int mid=(low+high)/2;
    if(arr[mid]==target){
        return mid;
    }
    if(arr[mid]<target){
        binarySearch(arr, mid+1, high, target);
    }
    return binarySearch(arr, low, mid-1, target);

}
int main(){
    int num[]={2, 5, 8, 12, 16, 23, 38, 56};
    int size=8, key=23;
    int result=binarySearch(num,0, size-1, key);
    if (result=-1){
        printf("%d not found", key);
    }else{
        printf("%d found at index %d", key, result);
    }
    
    
}