#include <stdio.h>

int main(){
    int N=10, sum=0;
    for(int i=0;i<=N;i++){
        if(i%2==0){
            sum+=i;
        }
    }
    printf("The sum is %d", sum);
}
