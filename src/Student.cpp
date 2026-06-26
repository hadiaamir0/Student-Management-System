#include "Student.h"
#include <iostream>

using namespace std;

Student::Student()
{
}

Student::Student(
    int id,
    string name,
    float cgpa,
    string department)
{
    this->id=id;
    this->name=name;
    this->cgpa=cgpa;
    this->department=department;
}

void Student::display()
{
    cout << "\nID: " << id;
    cout << "\nName: " << name;
    cout << "\nCGPA: " << cgpa;
    cout << "\nDepartment: " << department;
    cout << endl;
}

int Student::getId()
{
    return id;
}

string Student::getName()
{
    return name;
}

float Student::getCGPA()
{
    return cgpa;
}