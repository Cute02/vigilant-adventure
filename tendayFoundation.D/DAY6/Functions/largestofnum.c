#include <stdio.h>

int largest(int n1, int n2){
    
    if(n1>n2){
        return n1;

    }else if(n2>n1){
        return n2;
    }else{
        printf("%d=%d",n1, n2);
    }
}
int main(){
    int num1=34, num2=78;
    printf("Max of %d and %d is %d",num1, num2, largest(num1, num2));
    return 0;
}