#include <stdio.h>
#include "myhead1.h"

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printPrimes(n);

    return 0;
}