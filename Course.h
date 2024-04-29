#ifndef COURSE_H
#define COURSE_H
#include <iostream>
#include <string.h>
#include "Person.h"
using namespace std;

class Course
{
private:
    string name;
    int id;
    Person** persons;
    
public:
    Course(/* args */);
    Course(string name, int id);
    ~Course();

    bool addPerson(Person* p);
    void setID(int id);
    int getID();
    void setName(string name);
    string getName();
    Person** getPerson();

};



#endif