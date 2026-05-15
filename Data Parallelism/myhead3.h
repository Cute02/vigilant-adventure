#ifndef MYHEAD3_H
#define MYHEAD3_H

#include <pthread.h>

// Structure for range passing
typedef struct {
    int start;
    int end;
} Range;

// Thread functions
void* printPrimes(void* arg);
void* printFibonacci(void* arg);

// Shared resources
extern pthread_mutex_t lock;
extern int counter;

#endif