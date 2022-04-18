#include <iostream>

using namespace std;

void myFunction(int a)
{
    cout << "Value of a inside myFunction is " << a << endl;
    a = 30;
}

int main()
{
    int a = 20;
    cout << "value of a before fn call " << a << endl;
    myFunction(a);
    cout << "value of a after fn call " << a << endl;
}