#include <stdio.h>

int factorial(int n){
    
    
        
    if(n==1 || n==0){
        return 1;
    }
    return nfactorial(n-1);
}
int main(){
    int num=6;
    printf("Factorial of 6 is %d",factorial(num));
    return 0; 
}