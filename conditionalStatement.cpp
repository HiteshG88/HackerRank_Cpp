#include <iostream>
using namespace std;

int main()
{
    string arr[] = {"Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int value;
    cout << ">> ";
    cin >> value;
    if (value < 10)
    {
        cout << arr[value];
    }
    else
    {
        cout << arr[0];
    }
}