#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    string name;
    fstream file;

    file.open("f1.txt", ios::out); // override data
    // file.open("f1.txt", ios::app); // append data

    cout << "Enter your name ";
    getline(cin, name);

    file << name << endl;

    // file.close();
}