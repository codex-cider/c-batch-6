#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    string data;

    fstream file;
    file.open("f1.txt", ios::in);

    while (getline(file, data))
    {
        cout << data << endl;
    }
}