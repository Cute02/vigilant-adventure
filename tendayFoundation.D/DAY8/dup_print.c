#include <stdio.h>

int main(){
    int arr[]={3, 1, 4, 1, 5, 3, 2, 5};
    for(int i=0;i<8;i++){
        int isDuplicate=0;
        for(int j=0;j<i;j++){
            if(arr[i] == arr[j]){
                isDuplicate=1;
                break;
            }   
        }
        if(isDuplicate){
            continue;
        }
        printf("%d\t", arr[i]);
    }
    printf("\n");
    return 0;
}