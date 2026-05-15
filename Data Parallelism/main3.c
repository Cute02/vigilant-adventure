#include <stdio.h>
#include <pthread.h>
#include "myhead3.h"

int counter = 0;
pthread_mutex_t lock;

int main() {
    pthread_t t1, t2, t3;
    int primeLimit, fibLimit;

    printf("Enter limit for prime numbers: ");
    scanf("%d", &primeLimit);

    printf("Enter limit for Fibonacci series: ");
    scanf("%d", &fibLimit);

    pthread_mutex_init(&lock, NULL);

    // Split range for primes
    Range r1 = {2, primeLimit / 2};
    Range r2 = {primeLimit / 2 + 1, primeLimit};

    // Two threads for primes
    pthread_create(&t1, NULL, printPrimes, &r1);
    pthread_create(&t2, NULL, printPrimes, &r2);

    // One thread for Fibonacci
    pthread_create(&t3, NULL, printFibonacci, &fibLimit);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    pthread_join(t3, NULL);

    pthread_mutex_destroy(&lock);

    printf("All operations ended\n");

    return 0;
}