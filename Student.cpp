#include "Student.h"
#include <iostream>

using namespace std;

Student::Student(){

    //Empty values for Default constructor
    name = "";
    rollNo = 0;
    age = 0;
    gpa = 0.0f;
    cout << "Default constructor called for student." << endl;
}

Student::Student(string n, int a, int r, float g){

    //Parameterized constructor for custom values
    name = n;
    rollNo = r;
    age = a;
    gpa = g;
    cout << "Parameterized constructor called for " << name << endl;
}

Student::~Student(){

    //Destructor command
    cout << "Object is detroyed." << endl;
}

//Setter Methods
void Student::setName(string n){
    name = n;
}
void Student::setAge(int a){
    age = a;
}
void Student::setRollNo(int r){
    rollNo = r;
}
void Student::setGpa(float g){
    gpa = g;
}

//Getter Methods
string Student::getName(){
    return name;
}
int Student::getAge(){
    return age;
}
int Student::getRollNo(){
    return rollNo;
}
float Student::getGpa(){
    return gpa;
}

//Grade calculation
char Student::calculateGrade(){
    if (gpa >= 3.5) {
        return 'A';
    }
    if (gpa >= 3.2) {
        return 'B';
    }
    if (gpa >= 3.0) {
        return 'C';
    }
    if (gpa >= 2.5) {
        return 'D';
    }
    return 'F';
}

//Display information
void Student::displayInfo(){
    cout << "------------------------------------------------------------------" << endl;
    cout << "Name : " << name << " | Age : " << age << " | Roll Number : " << rollNo << " | Gpa : " << gpa << " | Grade : " << calculateGrade() << endl;
    cout << "------------------------------------------------------------------" << endl;
    cout << endl;
    
}
