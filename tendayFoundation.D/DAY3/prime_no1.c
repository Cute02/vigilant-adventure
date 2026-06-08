#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, limit, flag;
    printf("Enter the limit: ");
    scanf("%d", &limit);
    for(i=2; i<=limit; i++){
        flag=0;
        for(j=2; j<=i/2; j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("%d\n",i);
        }
    }
    
    
}