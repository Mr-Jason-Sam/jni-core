#ifndef SMARTCOUNTINGSEM_H
#define SMARTCOUNTINGSEM_H

#include <semaphore.h>
#include <iostream>

using namespace std;

class SmartCountingSem
{
public:
    SmartCountingSem(unsigned int init_sem_count);
    ~SmartCountingSem();
    bool get();
    bool post();
private:
    sem_t sem;
};

#endif // SMARTCOUNTINGSEM_H
