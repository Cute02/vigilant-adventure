#include <stdio.h>

int sum(int n1, int n2){
    return n1+n2;
}
int main(){
    int num1=15, num2=27;
    
    printf("Sum of %d and %d is %d", num1, num2,sum(15,27));

}