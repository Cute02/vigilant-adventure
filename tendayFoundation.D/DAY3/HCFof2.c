#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2, limit, hcf=1;
    printf("Enter two numbers to find its HCF: ");
    scanf("%d %d",&num1, &num2);
    if (num1<num2){
        limit=num1;
    }else{
        limit=num2;
    }
    printf("Highest Common factors are :  ");
    for(int i=1;i<=limit;i++){
        if(num1%i==0 && num2%i==0){
            hcf=i;
        }
    }
    printf("%d is the Highest Common Factor..", hcf);
    return 0;

    
}
