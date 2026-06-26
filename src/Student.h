#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student
{
private:
    int id;
    std::string name;
    float cgpa;
    std::string department;

public:
    Student();

    Student(
        int id,
        std::string name,
        float cgpa,
        std::string department
    );

    void display();

    int getId();

    std::string getName();

    float getCGPA();
};

#endif