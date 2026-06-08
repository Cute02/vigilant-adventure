#include <stdio.h>
#include <stdlib.h>
int main(){
    int i=1, n, sum=0;
    printf("Enter a number to find the sum from 1 to n: ");
    scanf("%d", &n);
    while(i<=n){
        sum += i;
        i++;
    }
    printf("The sum from 1 to %d is %d\n", n, sum);
}