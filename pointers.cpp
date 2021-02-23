#include <iostream>
using namespace std;

void getSumAndDiff(int *a, int *b)
{
    int sum = *a + *b;
    int diff = abs(*a - *b);
    *a = sum;
    *b = diff;
}

int main()
{
    int a, b;
    cin >> a >> b;
    getSumAndDiff(&a, &b);
    cout << a << endl
         << b;
}