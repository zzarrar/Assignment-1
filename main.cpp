#include "Student.h"
#include <iostream>

using namespace std;

int main(){

    //Some touches to make the program look good
    cout << "_____________________________________________________________" << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << "\tStudent Information System || TechVision Pvt. Ltd" << endl;
    cout << "_____________________________________________________________" << endl;
    cout << "-------------------------------------------------------------" << endl;

    //1st student using Default constructor
    cout << endl;
    cout << "----------------------------------------" << endl;
    cout << "1. Creating Student:" << endl;
    Student p1;

    //2nd student using Parameterized constructor
    cout << "\n2. Creating Student:" << endl;
    Student p2("Ghousia",19,77,3.0);

    //3rd student using Setter/Getter
    cout << "\n3. Creating Student:" << endl;
    Student p3;
    p3.setName("Ali");
    p3.setAge(20);
    p3.setRollNo(69);
    p3.setGpa(2.5);
    cout << "----------------------------------------" << endl;
    cout << endl;

    //Displaying Information
    cout << "----------------------------------------" << endl;
    cout << "Displaying Information:" << endl;
    cout << "----------------------------------------" << endl;
    cout << endl;
    p1.displayInfo();
    p2.displayInfo();

    //Displaying using Getter Method
    cout << "------------------------------------------------------------------" << endl;
    cout << "Name : " << p3.getName() << " | Age : " << p3.getAge() << " | Roll Number : " << p3.getRollNo() << " | Gpa : " << p3.getGpa() << " | Grade : " << p3.calculateGrade() << endl;
    cout << "------------------------------------------------------------------" << endl;

    //Completion message
    cout << "_____________________________________________________________" << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << "\t\tProgram Ended Successfully." << endl;
    cout << "_____________________________________________________________" << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << endl;
    return 0;
}