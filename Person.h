#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

//#write Person class here




class Person {
    private:
        string name;
        int id;
public:
    Person();
    void display();
    string getName();
    void setName();
    int getId();
    void setId();
};







#endif
