#include "University.h"

University::University(/* args */)
{
        this-> name = "Uni of Adelaide";
    this->location = "Adelaidee";
  this->courses = new Course[5];
  this-> gradebooks = new Gradebook[1];
}

University::~University()
{
    delete courses;
    delete gradebooks;
}
    string University::getName()
    {
return name;
    };
    string University::getLocation()
    {
return location;
    };
    Course* University::getCourses()
    {
return courses;
    };
    Gradebook* University::getGradebooks()
    {
return gradebooks;
    };
  


bool University::addCourse(int id, string name)
{
for (int i = 0; i < 5; i++)
{if ( courses[i].getName()=="")
{
    courses[i].setName(name);
    courses[i].setID(id);
}
return true;

   
}
return false;
};

