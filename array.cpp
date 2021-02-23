#include <iostream>
using namespace std;

// using reference:
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    return;
}

// using pointer:
// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    int first = 0;
    int last = size - 1;
    while (first < last)
    {
        swap(arr[first], arr[last]);
        first++;
        last--;
    }
    // cout << "hello";
    for (int i = 0; i < size; i++)
        cout << arr[i] << endl;
    return 0;
}