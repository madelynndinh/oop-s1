#ifndef GRADEBOOK_H
#define GRADEBOOK_H
#include <iostream>
#include <string.h>
#include "Grade.h"
using namespace std;

class Gradebook
{
private:
    Grade* grades;

public:
    Gradebook();
    ~Gradebook();

    bool addGrade(int stud_id, int course_int, string assignment, int value);
};



#endif