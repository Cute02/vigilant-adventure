#include <stdio.h>

int main(){
    int n = 7, flag = 0;
    if (n <= 1) {
        flag = 1;
    } else {
        for(int i = 2; i <= n / 2; i++){
            if(n % i == 0){
                flag = 1;
                break;
            }
        }
    }

    if(flag == 0){
        printf("%d is a prime number\n", n);
    } else {
        printf("%d is not a prime number\n", n);
    }
    return 0;
}