#include <stdio.h>
#include <stdlib.h>

int main(){
    int myNumbers[5];
    int size=sizeof(myNumbers)/sizeof(myNumbers[0]);
    for(int i=0; i<5; i++){
        printf("Enter element no. %d: ", i+1);
        scanf("%d", &myNumbers[i]);
    }
    
    printf("%d", myNumbers[5]);

    return 0;
}