#include "Grade.h"

Grade::Grade(/* args */)
{
    this->assignment = "";
    this->value=0;

}

Grade::Grade(string assignment, int value)
{
this->assignment = assignment;
this->value = value;

};


Grade::~Grade()
{
}

void Grade::setAssignment(string assignment)
{
    this->assignment = assignment;
}
string Grade::getAssignment()
{
    return assignment;
}

void Grade::setValue(int value)
{
    this->value = value;
}