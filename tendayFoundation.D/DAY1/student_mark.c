#include <stdio.h>
#include <stdlib.h>

int main(){
    int mark;
    printf("Enter your mark:");
    scanf("%d", &mark);
    if(mark>=40){
        printf("You are eligible for promotion....\n");

    }else{
        printf("You are not eligible for promotion.\n");
    }
    
    return 0;
}