#include <iostream>
using namespace std;

class Student
{
public:
    int a;
    void getName(Student ss)
    {
        cout << "Class a is " << this->a << endl;

        cout << "Class a from object " << ss.a << endl;

        ss.a = 60;
        this->a = 60;
    }
};

int main()
{

    Student st1, st2;

    st1.a = 30;
    st2.a = 50;

    st1.getName(st2);

    cout << "st1 a is " << st1.a << endl;
    cout << "st2 a is " << st2.a << endl;
}