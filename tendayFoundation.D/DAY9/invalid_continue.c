#include <stdio.h>

int main(){
    int n, num, sum=0;
    printf("Enter the limit: ");
    scanf("%d", &n);
    for(int i=1;i<=n;){
        printf("Enter the element: ");
        scanf("%d", &num);
        if(num<1 || num>100){
            printf("Invalid output...\n");
            continue;
        }else{
            sum+=num;
            i++;
        }

    }
    printf("Sum = %d\n", sum);
}