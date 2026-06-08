#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char name[50];
    int age;
    printf("Enter your name:");
    scanf("%s", name);
    printf("Enter your age:");
    scanf("%d", &age);
    printf("Your name is %s and you are %d years old.\n", name, age);
    return 0;
}