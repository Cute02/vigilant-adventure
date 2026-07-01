#include <stdio.h>

int main(){
    int a=205, b=205, c=100;
    if (a+b<=c || b+c<=a || a+c<=b){
        printf("Not a valid traiangle");

    }else{
        if(a==b && b==c){
            printf("The given triangle is an equilateral triangle");
        }else if(a==b || b==c || a==c ){
            printf("The given triangle is an isoceles triangle.");

        }else{
            printf("The given triangle is an scalene triangle.");
        }
    }
}