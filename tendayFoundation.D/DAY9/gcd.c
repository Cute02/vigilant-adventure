#include <stdio.h>

int main(){
    int a=120, b=18;
    while(b != 0){
        int temp=b;
        b=a % b;
        a=temp;
    }
    printf("GCD is %d", a);
    return 0;
}