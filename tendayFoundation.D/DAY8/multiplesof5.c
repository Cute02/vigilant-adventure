#include <stdio.h>

int main(){
    
    
    for(int i=1; i<=100;i++){
        if(i<5){
            printf("%d\n", i);

        }else if(i%5==0){
            continue;
        }else{
            printf("%d\n", i);
        }
    }
}