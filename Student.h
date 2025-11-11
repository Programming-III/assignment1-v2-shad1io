#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;
//#write student class here


class Student {
    private:
        int yearLevel;
        string major;
    public:
        Student();
        Student(int year, string major);
        void display();
        string getMajor();
        int getYearLevel();
        void setMajor();
        void setYearLevel();


};










#endif
