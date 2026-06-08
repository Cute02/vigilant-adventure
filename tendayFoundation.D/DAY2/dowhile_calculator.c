#include <stdio.h>
#include <stdlib.h>
int main(){
    int choice, num1, num2;
    do{
        printf("Simple Calculator\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n"); 
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. EExit\n");
        
        printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2);
        printf("Enter your choice:");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("The sum is %d\n", num1+num2);
                break;
            case 2:
                printf("The difference is %d\n", num1-num2);
                break;
            case 3:
                printf("The product is %d\n", num1*num2);
                break;
            case 4:
                if(num2!=0){
                    printf("The quotient is %d\n", num1/num2);
                }
                else{
                    printf("Division by zero is not allowed.\n");
                }
                break;
            case 5:
                printf("Exiting the calculator. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while(choice != 5);
}
