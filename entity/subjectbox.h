#ifndef SUBJECTBOX_H
#define SUBJECTBOX_H


class SubjectBox
{
public:
    SubjectBox();
    int getLeft() {return left;}
    int getTop() {return top;}
    int getRight() {return right;}
    int getBottom() {return bottom;}
private:
    int left;
    int top;
    int right;
    int bottom;
};

#endif // SUBJECTBOX_H
