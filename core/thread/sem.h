#ifndef SEM_H
#define SEM_H

#include "semaphore.h"

class Sem
{
public:
    Sem(unsigned int semCount);
    ~Sem();
    bool Post();
    bool Get();
private:
    sem_t sem;
};

#endif // SEM_H
