#include <stdio.h>
#include <stdlib.h>
int main(){
    int i, n;
    int sum = 0;
        printf("Enter a natural number for taking its sum: ");
        scanf("%d", &n);
    for(i=1;i<=n;i++){
        sum += i;
    }
    printf("Sum of first n natural numbers: %d\n",sum);
    return 0;
}