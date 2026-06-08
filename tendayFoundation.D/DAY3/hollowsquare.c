#include <stdio.h>
#include <stdlib.h>

int main(){
    int N, row, col;
    printf("Enter the limit: ");
    scanf("%d", &N);
    for(row=1; row<=N;row++){
        for(col=1;col<=N;col++){
            if(col==1 || row==1 || col==N || row==N){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}