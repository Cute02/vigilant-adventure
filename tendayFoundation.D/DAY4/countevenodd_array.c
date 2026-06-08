#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[]={2,4,6,8,10,12, 13};
    int size=sizeof(arr)/sizeof(arr[0]);
    int evencount=0,oddcount=0;
    for(int i=0; i<size;i++){
        if(arr[i]%2==0){
            evencount++;
        }else{
            oddcount++;
        }
    }
    printf("count of the even elements in the array: %d\n", evencount);
    printf("count of the odd elements in the array: %d", oddcount);
    
}