#ifndef STUDENT_H
#define STUDENT_H

#include <string>

using namespace std;

class Student{

    private:

    //Encapsulation
    string name;
    int age , rollNo;
    float gpa;

    public:

    /* Because there are 2 constructor with same name but different parameters.
       This is known as Constructor Overloading. */

    //Default constructor
    Student();

    //Parameterized constructor
    Student(string n, int a, int r, float g);

    //Destructor
    ~Student();

    //Setter Methods
    void setName(string n);
    void setAge(int a);
    void setRollNo(int r);
    void setGpa(float g);

    //Getter Methods
    string getName();
    int getAge();
    int getRollNo();
    float getGpa();

    //Grade calculation
    char calculateGrade();

    //Abstraction
    //Display information
    void displayInfo();
    
};

#endif