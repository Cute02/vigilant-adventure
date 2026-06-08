#include <stdio.h>
#include <stdlib.h>
int main(){
    int numbers[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length = 10, found=0;
    int num1;
    
    printf("Enter a number to find it in the loop: ");
    scanf("%d", &num1);
    for(int i=0; i<length; i++){
        if (numbers[i] == num1){
            printf("Number found...\n");
            found=1;
            break;
        }
    }
    if(found==0){
        printf("Number not found in the array.\n");
    }
}