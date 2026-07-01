#include <stdio.h>

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    
    for(int i=0; i<size;i++){
        int num=arr[i], flag=0;
        if (num==1){
            flag=1;
        }

        for(int j=2;j<=num/2;j++){
            if(num%j==0){
                flag=1;
            }

        }
        if (flag==0){
            sum+=num;
        }
    }
    printf("The sum of all prime numbers in the array is %d", sum);
}