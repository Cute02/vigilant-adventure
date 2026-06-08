#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice;
    printf("Enter a number between 1 and 5: ");
    scanf("%d", &choice);
    switch (choice){
        case 1:
        printf("Monday\n");
        break;
        case 2:
        printf("Tuesday\n");
        break;
        case 3:
        printf("Wednesday\n");
        break;
        case 4:
        printf("Thursday\n");
        break;
        case 5:
        printf("Friday\n");
        default:
        printf("Wrong choice...Better Luck Nxt Time\n");

        
    }

        
    

    return 0;
}