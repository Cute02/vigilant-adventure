#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[]= {1,2,3,4,5,6,7};
    int searchnum;
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("Enter the number to find it in the array: ");
    scanf("%d", &searchnum);
    int found=0;
    for(int i=0;i<size;i++){
        if(searchnum==arr[i]){
            found=1;
        }
    }
    if(found==1){
        printf("Number found");
    }else{
        printf("Number not found..");
    }
    
}