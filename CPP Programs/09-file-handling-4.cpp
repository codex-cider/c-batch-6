#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    string message;
    fstream file;

    file.open("f1.txt", ios::out); // override data

    cout << "Enter your message ";
    getline(cin, message);

    for (int i = 0; i < message.length(); i++)
    {
        int assci = message[i];
        file << assci;
    }

    file.close();
}