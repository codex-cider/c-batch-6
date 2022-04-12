#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> numbers;

    for (int i = 0; i < 5; i++)
    {
        int input;
        cout << "Enter any number ";
        cin >> input;
        numbers.push_back(input);
    }

    numbers.push_back(100);

    for (int i = 0; i < numbers.size(); i++)
    {
        cout << i + 1 << " Number is " << numbers.at(i) << endl;
    }
}