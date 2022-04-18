#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student
{
    string name;
    string rollNumber;
    string branch;
    string address;
    string cgpa;
    vector<Student> *students;

public:
    Student(vector<Student> *students)
    { // parameterized constructor
        this->students = students;
    }

private:
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

        (this->students)->push_back(*this);
    }
    void printStudent()
    {
        cout << "Student name: " << this->name << "\n";
        cout << "Student roll number: " << this->rollNumber << "\n";
        cout << "Student branch: " << this->branch << "\n";
        cout << "Student address: " << this->address << "\n";
        cout << "Student CGPA: " << this->cgpa << "\n";
    }

    void printAllStudent()
    {
        for (int i = 0; i < (this->students)->size(); i++)
        {
            Student s = (this->students)->at(i);
            cout << "\n/********  STUDENT " << i + 1 << "    *********/\n";
            s.printStudent();
            cout << "\n-----------------------------------\n";
        }
    }

    void options()
    {
        int op;
        cout << "Choose any one options " << endl;
        cout << "Press 1 to add Student " << endl;
        cout << "Press 2 for print all Student " << endl;
        cin >> op;
        cin.get();

        switch (op)
        {
        case 1:
            this->addStudent();
            break;
        case 2:
            this->printAllStudent();
            break;
        default:
            cout << "Wrong option choose";
            break;
        }
    }

public:
    void start()
    {
        char c;
        do
        {
            cout << "\n\n";
            this->options();

            cout << "\n";
            cout << "Wants to continure press y else any key ";
            cin >> c;
            cin.get();

        } while (c == 'y');
    }
};

vector<Student> students;

int main()
{
    // Student st;
    Student st1 = Student(&students);

    st1.start();
}
