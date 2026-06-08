#include <stdio.h>

int main(){
    int arr[]= {1,2, 3, 2, 7, 1, 3, 8,8};
    int count=0;
    printf("Duplicated elements are:\n");
    for(int i=0; i<9; i++){
        count=0;
        for(int j=0;j<9;j++){
            if (arr[i]==arr[j]){
                count++;
            }

        }
        
        if(count>1){
            printf("%d\t",arr[i]);
        }
    }
    return 0;
}