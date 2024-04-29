#ifndef UNIVERISTY_H
#define UNIVERISTY_H
#include <iostream>
#include <string.h>
#include "Course.h"
#include "Gradebook.h"

using namespace std;

class University
{
private:
    string name;
    string location;
    Course* courses;
    Gradebook* gradebooks;

public:
    University(/* args */);
    ~University();

    string getName();
    string getLocation();
    Course* getCourses();
    Gradebook* getGradebooks();
    bool addCourse(int id, string name);
};



#endif