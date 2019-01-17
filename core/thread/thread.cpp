#include "thread.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <assert.h>

Thread::Thread(string name):name(name) {

}

Thread::~Thread() {

}

void Thread::threadEntry(Sem *sem) {
    bool res = init();
    if (res) {
        sem->Post();
        mainLoop();
    }
}

bool Thread::create() {

}

void Thread::sleepSec(unsigned int sec) {
    sleep(sec);
}

void Thread::run() {
    if(!create()){
        printf("Create Thread Fail....\n");
        exit(0);
    }
}

bool Thread::init() {
    return true;
}
