#include <stdio.h>
#include <stdlib.h>
int main(){
    int num;
    do{
        printf("Enter a number: \n");
        scanf("%d\n", &num);
    }
    while(num!=0);
}