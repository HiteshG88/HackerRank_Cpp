#include <iostream>
#include <string>
using namespace std;

struct student
{
    int age, standared;
    string first_name, last_name;
    void printStudent()
    {
        cout << age << " " << first_name << " " << last_name << " " << standared;
    }
};

int main()
{
    student a;
    cin >> a.age >> a.first_name >> a.last_name >> a.standared;
    a.printStudent();
}