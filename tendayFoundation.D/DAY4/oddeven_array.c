#include <stdio.h>

int main(){
    int limit;
    printf("Enter the size of the array: ");
    scanf("%d", &limit);
    if (limit <= 0) {
        printf("Invalid size.\n");
        return 1;
    }

    int myNumbers[limit];
    int even[limit];
    int odd[limit];
    int evenCount = 0;
    int oddCount = 0;

    for(int i=0; i<limit; i++){
        printf("Enter element no. %d: ", i+1);
        scanf("%d", &myNumbers[i]);
    }
    for(int i=0; i<limit; i++){
        if (myNumbers[i] % 2 == 0){

            even[evenCount++] = myNumbers[i];
            myNumbers[i]=1;
        } else {
            odd[oddCount++] = myNumbers[i];
            myNumbers[i]=0;
        }
    }

    printf("Even numbers are...\n");
    for(int j=0; j<evenCount; j++){
        printf("%d\t", even[j]);
    }
    printf("\nOdd numbers are...\n");
    for(int j=0; j<oddCount; j++){
        printf("%d\t", odd[j]);
    }
    printf("\nNew array is..\n");
    for(int j=0; j<limit; j++){
        printf("%d\t", myNumbers[j]);
    }
    printf("\n");

    return 0;
}