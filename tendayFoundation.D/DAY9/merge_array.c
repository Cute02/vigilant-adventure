#include <stdio.h>

int main(){
    int arr1[]= {64, 25, 12, 45, 33};
    int arr2[]= {1,2,3,4,6,7,8};
    int n1=sizeof(arr1)/sizeof(arr2[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int arr3[n1+n2];
    for(int i=0;i<n1;i++){
        arr3[i]=arr1[i];
    }
    for(int i=0;i<n2;i++){
        arr3[n1+i]=arr2[i];
    }
    for(int i=0;i<n1+n2;i++){
        printf("%d\t", arr3[i]);
    }
}