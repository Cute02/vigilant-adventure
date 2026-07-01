#include <stdio.h>
int isEven(int n){
    if (n%2==0){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int num1=10, num2=7;
    if (isEven(num1)){
         printf("%d is Even\n", num1);
    }else{
        printf("%d is Odd\n", num1);
    }

     if (isEven(num2)){
         printf("%d is Even\n", num2);
    }else{
        printf("%d is Odd\n", num2);
    }
    return 0;
}