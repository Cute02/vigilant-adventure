#include <stdio.h>
#include <stdlib.h>

int main(){
    for(int i; i<=10; i++){
        if(i==5){
            continue;
        }else{
            printf("%d\n", i);
        }
    }
    
    
}