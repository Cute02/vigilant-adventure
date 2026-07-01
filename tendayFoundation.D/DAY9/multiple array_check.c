#include <stdio.h>
int main(){
    int arr1[] = {10, 20, 30, 40};
    int arr2[] = {50, 60, 70, 80};
    int arr3[] = {90, 100, 110, 120};

    int *arrays[]={arr1, arr2,arr3};
    int sizes[] = {4,4,4};
    int target=10;
    int found=0, foundArray=-1,foundIndex=-1;
    for (int i=0;i<3;i++){
        for(int j=0;j<sizes[i];j++){

            if(arrays[i][j] == target){
                found=1;
                foundArray=i+1;
                foundIndex=j;
                break;
            }
        }
        if (found==1){
            break;
        }
    }
    if(found==1){
        printf("Found %d in array %d at index %d\n", target, foundArray, foundIndex);
    }else{
        printf("%d not found in any array\n", target);
    }
    return 0;
}