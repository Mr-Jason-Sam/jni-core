#ifndef SUBJECT_H
#define SUBJECT_H

#include "subjectbox.h"

class Subject
{
public:
    Subject();
    SubjectBox getSubjectBox(){return box;}
private:
    SubjectBox box;
};

#endif // SUBJECT_H
