#include <stdio.h>
#include <stdbool.h>

int main(){
    int num;
    while(true){
        printf("Enter a number: ");
        scanf("%d", &num);
        if(num==0){
            break;
        }
    }
}