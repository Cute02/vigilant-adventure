#include <stdio.h>

int main() {
    int i, j, limit;
    printf("Enter the numberof rows: ");
    scanf("%d", &limit); // 5
    for(i=1;i<=limit;i++){
        for(j=1;j<=limit-i;j++){
            printf("  ");

        }
        for(j=1;j<=(2*i)-1; j++){
            printf("* ");
        }
        printf("\n");
    }
        
    for(i=limit-1;i>=1;i--){
        for(j=1;j<=limit-i;j++){
            printf("  ");
        }
        for(j=1;j<=(2*i)-1;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}