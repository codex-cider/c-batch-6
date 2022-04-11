#include <iostream>
#include <string>

using namespace std;

/*
Converting code into reusable & modular
*/

class Student
{
public:
    string name;
    string rollNumber;
    string branch;
    string address;
    string cgpa;

    void getStudent()
    {
        cout << "Enter student name: ";
        getline(cin, this->name);
        cout << "Enter roll number :";
        getline(cin, this->rollNumber);
        cout << "Enter branch: ";
        getline(cin, this->branch);
        cout << "Enter address: ";
        getline(cin, this->address);
        cout << "Enter CGPA: ";
        getline(cin, this->cgpa);
    }

    void printStudent()
    {
        cout << "Student name: " << this->name << "\n";
        cout << "Student roll number: " << this->rollNumber << "\n";
        cout << "Student branch: " << this->branch << "\n";
        cout << "Student address: " << this->address << "\n";
        cout << "Student CGPA: " << this->cgpa << "\n";
    }
};

int main()
{
    Student st1, st2;

    // Get Data For ST1 & Print it
    st1.getStudent();
    st1.printStudent();

    // Get Data For ST2 & Print it
    st2.getStudent();
    st2.printStudent();
}