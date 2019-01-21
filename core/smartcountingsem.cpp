#include "smartcountingsem.h"

SmartCountingSem::SmartCountingSem(unsigned int init_sem_count) {
    int ret = sem_init(&sem, 0, init_sem_count);

        if (ret != 0) {
            cout << "CLinuxCountingSem:  error" << endl;

        }

}

SmartCountingSem::~SmartCountingSem() {

}

bool SmartCountingSem::get() {
    if (sem_wait(&sem) == 0)
        return true;
    else
        return false;
}
bool SmartCountingSem::post() {
    sem_post(&sem);
    return true;
}
