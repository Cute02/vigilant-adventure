#include <stdio.h>
#define SIZE 5
int stack[SIZE];
int top = -1;
int main(){
    for(int i=0; i<SIZE;i++){
        printf("Enter the number: ");
        scanf("%d", &stack[i]);
        top++; 
    }

    /*printf("STACK:");
    for (int i=top;i>=0; i--){
        printf("%d\n",stack[i]);
    }*/

    printf("STACK after pop:");
    for (int i=top;i>=0;i--){
        printf("%d\n", stack[i]);
    }
}