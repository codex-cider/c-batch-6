#include <iostream>
#include <string>

using namespace std;

class Student
{
    string name;
    string rollNumber;
    string branch;
    string address;
    string cgpa;

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
        cout << "Under working ";
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

int main()
{
    Student st1;
    st1.start();
}