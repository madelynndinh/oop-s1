#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string.h>
#include "Person.h"

using namespace std;

class Student:public Person
{
private:
    int id;
public:
    Student(/* args */);
    Student(int id);
    ~Student();

    void setID(int id);
    void addGrade();
    int getID();
};



#endif