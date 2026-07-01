#include <stdio.h>

void evenodd(){
    int num;
    printf("Enter a number to check if it is even or odd: ");
    scanf("%d", &num);
    if(num%2==0){
        printf("%d is even number...", num);

    }else{
        printf("%d is odd number...", num);
    }
}
int main(){
    evenodd();
    return 0;
}