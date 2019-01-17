#include "sem.h"

#include <iostream>
using namespace std;

Sem::Sem(unsigned int semCount) {
    int result = sem_init(&sem, 0, semCount);

    if (result != 0)
        cout <<"Sem:  error" << endl;
}

Sem::~Sem() {

}

bool Sem::Post() {
    if(sem_wait(&sem)==0)
       return true;
    else
       return false;
}

bool Sem::Get() {
    sem_post(&sem);
    return true;
}
