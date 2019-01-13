#ifndef DETECTCONFIG_H
#define DETECTCONFIG_H

#include <iostream>
using namespace std;

class DetectConfig
{
public:
    DetectConfig();
    DetectConfig(string id, string name, int bufferSize) {
        this->id = id;
        this->name = name;
        this->bufferSize = bufferSize;
    }
    string getId() {
        return id;
    }
    string getName() {
        return name;
    }
    int getBufferSize() {
        return bufferSize;
    }
private:
    string id;
    string name;
    int bufferSize;
};

#endif // DETECTCONFIG_H
