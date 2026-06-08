#include <stdio.h>
#include <stdlib.h>

int main(){
    int limit;
    printf("Enter the limit: ");
    scanf("%d", &limit);
    for(int i=limit; i>=1;i--){
        printf("%d\n", i);
    }
}
