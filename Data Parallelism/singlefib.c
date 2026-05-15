#define _GNU_SOURCE
#include <stdio.h>
#include <sched.h>
#include <pthread.h>
#include "myhead3.h"

void* printFibonacci(void* arg) {
    int n = *(int*)arg;
    int a = 0, b = 1, next, i;

    for(i = 0; i < n; i++) {
        pthread_mutex_lock(&lock);

        int cpu = sched_getcpu();
        unsigned long tid = (unsigned long)pthread_self();

        printf("TID:%lu | %d fib: %d (CPU %d)\n",
               tid, counter++, a, cpu);

        pthread_mutex_unlock(&lock);

        next = a + b;
        a = b;
        b = next;
    }

    return NULL;
}