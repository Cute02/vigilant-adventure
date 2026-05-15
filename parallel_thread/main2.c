#include <stdio.h>
#include <pthread.h>
#include "myhead2.h"

int counter = 0;
pthread_mutex_t lock;

int main() {
    pthread_t t1, t2;
    int primeLimit, fibLimit;

    printf("Enter limit for prime numbers: ");
    scanf("%d", &primeLimit);

    printf("Enter limit for Fibonacci series: ");
    scanf("%d", &fibLimit);

    // Initialize mutex
    pthread_mutex_init(&lock, NULL);

    pthread_create(&t1, NULL, printPrimes, &primeLimit);
    pthread_create(&t2, NULL, printFibonacci, &fibLimit);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);

    // Destroy mutex
    pthread_mutex_destroy(&lock);

    printf("All operations ended\n");

    return 0;
}