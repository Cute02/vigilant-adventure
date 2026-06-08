#include <stdio.h>
#include <stdbool.h>

int main(){
    
    for(int i;i<=100;i++){
        if(i%17==0){
            break;
        }else{
            printf("%d\n",i);
        }
    }
}