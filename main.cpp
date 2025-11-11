#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"
#include "Instructer.h"


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

Student::Student(){}
Student::Student(int yearLevel,string major){
    this->yearLevel = yearLevel;
    this->yearLevel = yearLevel;
}
string Student::getMajor() {
    return major;
}
void Student::setMajor() {
    this-> major = major;
}
int Student::getYearlevel() {
    return yearLevel;
}
void Student::setYearLevel() {
    this -> yearLevel = yearLevel;
}
void Student::display() {
    cout << "Year: "<< yearLevel <<endl;
    cout << "Major: " <<major <<endl;
}






// ==================== Instructor Class Implementation ====================
Instructer::Instructer() {

}
Instructer::Instructer(string department,int experienceYears) {
    this -> department = department;
    this -> experienceYears = experienceYears;
}
string Instructer::getDepartment() {
    return department;
}
int Instructer::getExperienceYears() {
    return experienceYears;
}
void Instructer::setDepartment(string department) {
    this -> department = department;

}
void Instructer::setExperienceYears(int experienceYears){
this -> experienceYears = experienceYears;
}
void Instructer::display() {
    cout << "Department: "<< department <<endl;
    cout << "Experience: "<< experienceYears <<" Years"<<endl;
}



// ==================== Course Class Implementation ====================

Course::Course(){}
Course::Course(string courseCode,string courseName,int maxStudents,Student* students,int currentStudents) {
    this -> courseCode = courseCode;
    this -> students = students;
    this -> currentStudents = currentStudents;
    this -> maxStudents = maxStudents;
    this -> courseName = courseName;
}
string Course::getCourseCode() {
    return courseCode;
}
string Course::setCourseCode(string courseCode) {
    this-> courseCode = courseCode;
}
int Course::getCurrentStudents() {
    return currentStudents;
}
void Course::setCurrentStudents(int currentStudents) {

    this -> currentStudents = currentStudents;
}





// ==================== Main Function ====================
int main() {


    return 0;
}
