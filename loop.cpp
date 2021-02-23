#include <iostream>
using namespace std;

int main()
{
    string arr[] = {"Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int value, value2;
    cout << ">> ";
    cin >> value >> value2;

    for (int i = value; i < value2 + 1; i++)
    {
        if (i < 10)
        {
            cout << arr[i];
        }
        else if (i % 2 == 0)
        {
            cout << "even";
        }
        else
        {
            cout << "odd";
        }
        cout << endl;
    }
}