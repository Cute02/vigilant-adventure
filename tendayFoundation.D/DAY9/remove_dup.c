#include <stdio.h>

int main(){
    int arr[] = {3, 1, 4, 1, 5, 3, 2, 5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result[n], rSize=0;
    for(int i=0;i<n;i++){
        int isDup=0;
        for(int j=0;j<rSize;j++){
            if(arr[i]==result[j]){
                isDup=1;
                break;
            }
        }
        if(!isDup){
            result[rSize++] = arr[i];
        }
    }
    printf("After removing duplicates...\n");
    for(int i=0;i<rSize;i++){
        printf("%d\t", result[i]);
    }
    printf("\n");
    return 0;

}