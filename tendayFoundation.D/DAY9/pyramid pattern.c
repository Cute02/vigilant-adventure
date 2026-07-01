#include <stdio.h>

int main(){
    int limit=5;
    for(int i=1; i<=limit;i++){
        for(int j=1;j<=limit-i;j++){
            printf("  ");
        }
        for(int j=1;j<=(2*i)-1;j++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=limit-1;i>=1;i--){
        for(int j=1;j<=limit-i;j++){
            printf("  ");
        }
        for(int j=1;j<=(2*i)-1;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}