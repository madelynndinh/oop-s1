#include "Gradebook.h"

Gradebook::Gradebook(/* args */)
{
    grades = new Grade[5];
    
}

Gradebook::~Gradebook()
{
    delete grades;
}

  bool Gradebook::addGrade(int stud_id, int course_int, string assignment, int value)
    {
for (int i = 0; i < sizeof(grades); i++)
{
    if (grades[i].getAssignment() != "")
    {
        grades[i].setAssignment(assignment);
        grades[i].setValue(value);
return true;
    }
}
return false;

    };
