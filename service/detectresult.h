#ifndef DETECTRESULT_H
#define DETECTRESULT_H

#include "subject.h"

#include <iostream>
#include <list>
using namespace std;

class DetectResult
{
public:
    DetectResult();
    string getImageUrl() {return imageUrl;}
    list<Subject> getSubjects() {return subjects;}
    int getTimeUsed() {return timeUsed;}
    int getCode() {return code;}
    string getMessage(){return message;}
private:
    string imageUrl;
    list<Subject> subjects ;
    int timeUsed;
    int code;
    string message;
};

#endif // DETECTRESULT_H
