#ifndef MYHEAD2_H
#define MYHEAD2_H

#include <pthread.h>

// Thread functions
void* printPrimes(void* arg);
void* printFibonacci(void* arg);

// Shared resources
extern pthread_mutex_t lock;
extern int counter;

#endif // MYHEAD2_H