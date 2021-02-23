#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class student
{
private:
    int age, standared;
    string first_name, last_name;

public:
    void setStudent(int _a, int st, string fn, string ln)
    {
        age = _a;
        standared = st;
        first_name = fn;
        last_name = ln;
    }
    void getStudent()
    {
        cout << age << endl;
        cout << last_name << ", " << first_name << endl;
        cout << standared << endl
             << endl;
        cout << age << "," << first_name << "," << last_name << "," << standared;
    }
};

int main()
{
    int _a, st;
    string fn, ln;
    cin >> _a >> fn >> ln >> st;
    student a;
    a.setStudent(_a, st, fn, ln);
    a.getStudent();
}