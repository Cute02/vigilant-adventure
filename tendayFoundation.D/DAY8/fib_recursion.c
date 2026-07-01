#include <stdio.h>

int fib_recur(int n){
    switch(n){
        case 0:
        return 0;
        case 1:
        return 1;
    }
    return fib_recur(n-1)+fib_recur(n-2);

}

int main(){
    int num=7;
    printf("Fibonacci of %d is %d\n",num,fib_recur(num));


}