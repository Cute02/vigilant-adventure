#define _GNU_SOURCE
#include <stdio.h>
#include <sched.h>
#include <pthread.h>
#include "myhead3.h"

void* printPrimes(void* arg) {
    Range* r = (Range*)arg;

    int start = r->start;
    int end = r->end;

    int i, j, isPrime;

    for(i = start; i <= end; i++) {

        if(i < 2) continue;

        isPrime = 1;

        for(j = 2; j * j <= i; j++) {
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