#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, num;
    int first=0, second=1, third;
    printf("Enter the limit: ");
    scanf("%d", &num);
    printf("%d\n",first);
     printf("%d\n",second);
    for(i=1; i<=num-2; i++){
        third=first+second;
        printf("%d\n", third);
        first=second;
        second=third;

    }
    printf("\n");
    return 0;
}