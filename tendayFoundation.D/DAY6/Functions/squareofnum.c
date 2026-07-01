#include <stdio.h>

int num_square(int n){
    return n*n;
    
}
 int main(){
    int num=7;
    printf("Square of %d is %d", num, num_square(num));
    return 0;

 }