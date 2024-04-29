#include "Course.h"
#include "Grade.h"
#include "Gradebook.h"
#include "Instructor.h"
#include "Person.h"
#include "Student.h"
#include "University.h"
#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char const *argv[])
{
    University uni;
    Course course("Stats",1000);
    uni.addCourse(course.getID(),course.getName());
    Student student(123);
    course.addPerson(&student);
    uni.getGradebooks()->addGrade(student.getID(),course.getID(),"Assignment 1",70);

    return 0;
}
