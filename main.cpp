#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================

Person::Person(){}
Person::Person(string name,int id) {
    this->name = name;
    this->id = id;
}
void Person::setName(string name) {
    this->name = name;
}
void Person::setId(int id) {
    this -> id = id;
}

int Person::getId() {
    return id;
}
string Person::getName() {
    return name;
}
void Person::display() {
    cout <<"Currently Enrolled: " <<name << "(" << id << ")" <<endl;
}







// ==================== Student Class Implementation ====================






// ==================== Instructor Class Implementation ====================






// ==================== Course Class Implementation ====================








// ==================== Main Function ====================
int main() {
   
    
    return 0;
}
