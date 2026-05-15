#define _GNU_SOURCE
#include <stdio.h>
#include <sched.h>
#include <pthread.h>
#include "myhead2.h"

void* printPrimes(void* arg) {
    int n = *(int*)arg;
    int i, j, isPrime;

    for(i = 2; i <= n; i++) {
        isPrime = 1;

        for(j = 2; j < i; j++) {
            if(i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if(isPrime) {
            pthread_mutex_lock(&lock);

            int cpu = sched_getcpu();
            unsigned long tid = (unsigned long)pthread_self();

            printf("TID:%lu | %d prime: %d (CPU %d)\n",
                   tid, counter++, i, cpu);

            pthread_mutex_unlock(&lock);
        }
    }

    return NULL;
}