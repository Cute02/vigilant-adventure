#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, i, j;
    printf("Enter the number to get its factors: ");
    scanf("%d", &num);
    printf("Factors of %d\t", num);
    printf("1\t");
    
    for(i=2;i<=num/2;i++){
        if (num%i==0){
            printf("%d\t", i);
        }
    }
}
