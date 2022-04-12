#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
    string name;
    string rollNumber;
    string branch;
    string address;
    string cgpa;
};

int main()
{
    Student st1;

    cout << "Enter student name: ";
    getline(cin, st1.name);
    cout << "Enter roll number :";
    getline(cin, st1.rollNumber);
    cout << "Enter branch: ";
    getline(cin, st1.branch);
    cout << "Enter address: ";
    getline(cin, st1.address);
    cout << "Enter CGPA: ";
    getline(cin, st1.cgpa);

    cout << "Student name: " << st1.name << "\n";
    cout << "Student roll number: " << st1.rollNumber << "\n";
    cout << "Student branch: " << st1.branch << "\n";
    cout << "Student address: " << st1.address << "\n";
    cout << "Student CGPA: " << st1.cgpa << "\n";
}