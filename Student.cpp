#include "Student.h"

Student::Student(/* args */)
{
    this->id =0;
}
Student::Student(int id)
{
    this->id =id;
}

Student::~Student()
{
}

void Student::setID(int id)
{
    this->id = id;
};

int Student::getID()
{
    return id;
}