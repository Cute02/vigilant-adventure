#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    float price;
    int quantity;
    printf("Enter the price of the item:");
    scanf("%f", &price);
    printf("Enter the quantity:");
    scanf("%d", &quantity);
    float total = price *quantity;
    printf("The total price is: %f\n", total);
    return 0;
}