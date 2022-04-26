#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Student
{

    string name;
    string rollNumber;
    string branch;
    string address;
    string cgpa;

public:
    void addStudent()
    {
        cout << "Enter student name: ";
        getline(cin, this->name);
        cout << "Enter roll number: ";
        getline(cin, this->rollNumber);
        cout << "Enter branch: ";
        getline(cin, this->branch);
        cout << "Enter address: ";
        getline(cin, this->address);
        cout << "Enter CGPA: ";
        getline(cin, this->cgpa);

        this->saveStudentToFile();
    }

private:
    void saveStudentToFile()
    {
        fstream studentFile;
        studentFile.open("students.txt", ios::app);
        studentFile << this->name << "," << this->branch << "," << this->rollNumber << "," << this->address << "," << this->cgpa << endl;
    }
};

int main()
{
    Student st;
    st.addStudent();
}