#ifndef GRADE_H
#define GRADE_H
#include <iostream>
#include <string.h>

using namespace std;
class Grade
{
private:
    string assignment;
    int value;

public:
    Grade(/* args */);
    Grade(string assignment, int value);
    ~Grade();

void setAssignment(string assignment);
    string getAssignment();
    void setValue(int value);
    



};



#endif