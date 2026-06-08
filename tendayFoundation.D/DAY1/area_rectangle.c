#include <stdio.h>
#include <stdlib.h>

int main(){
    float length, width;
    printf("Enter length and width of the rectangle:");
    scanf("%f %f", &length, &width);
    float area = length * width;
    printf("The area of the rectangle is: %f\n", area);
    return 0;
}