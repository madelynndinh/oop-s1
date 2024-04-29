#include "Course.h"
Course::Course(/* args */)
{
    this->name = "";
    this-> id = 0;
    this->  persons = nullptr;
}

Course::Course(string name, int id)
{
    this->name = name;
    this-> id = id;
    this->  persons = new Person* [10];
    for (int i = 0; i < 10; i++)
    {
        persons[i]=nullptr;
    }
    
}

Course::~Course()
{
    delete persons;
}

bool  Course::addPerson(Person* p)
 {
    for (int i = 0; i < 10; i++)
    {
       if (persons[i]==nullptr)
{
    persons[i] = p;
    return true;
}

    }
    
return false;

 };
    void Course::setID(int id)
    {this->id = id;};
    int Course::getID(){return id;};
    void Course::setName(string name){this->name = name;};
    string Course::getName(){return name;};

    Person** Course::getPerson()
    {
        return this->persons;
    }