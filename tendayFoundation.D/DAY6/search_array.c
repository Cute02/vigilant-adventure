#include <stdio.h>

int main(){
    int key, found=0, arr[] = {1,2,3,4,6,1,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("Enter the elment to be searched: ");
    scanf("%d", &key);

    for(int i=0;i<size;i++){
        if(arr[i]==key){
            found=1;
            break;
        }
    }
    if (found==1){
        printf("Number found");
    }else{
        printf("Number not found!!");
    }
    return 0;
}