#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
//#write Instructor class here


class Instructer {
private:
    string department;
    int experienceYears;
public:
    Instructer();
    void display();
    string getDepartment()
    int getExperienceYears();
    void setDepartment();
    void setExperienceYears();
};









#endif
