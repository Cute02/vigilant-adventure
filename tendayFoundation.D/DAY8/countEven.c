# include <stdio.h>

int countEven(int arr[], int size){
    int count = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] % 2 == 0){
            count++;
        }
    }
    return count;
}

int main(){
    int num[] = {3, 6, 9, 12, 15, 18};
    int length = sizeof(num) / sizeof(num[0]);
    printf("Even count: %d", countEven(num, length));
    return 0;
}