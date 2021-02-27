#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void getIndex(int q, vector<int> &v)
{
    vector<int>::iterator up, low;
    up = upper_bound(v.begin(), v.end(), q);
    low = lower_bound(v.begin(), v.end(), q);
    if (v[(low - v.begin() + 1)] == q || v[(up - v.begin() - 1)] == q)
    {
        cout << "Yes " << (low - v.begin() + 1) << endl;
    }
    else
    {
        cout << "No " << (up - v.begin() + 1) << endl;
    }
}

int main()
{
    int size, queries, query;
    cin >> size;
    vector<int> v;
    for (int i = 0; i < size; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    cin >> queries;
    for (int i = 0; i < queries; i++)
    {
        cin >> query;
        getIndex(query, v);
    }
    return 0;
}