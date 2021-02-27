#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person
{
private:
    int age;
    string name;

public:
    virtual void getdata()
    {
        cin >> name >> age;
    }
    virtual void putdata()
    {
        cout << name << " " << age << " ";
    }
};

class Professor : public Person
{
private:
    int pub;
    static int cur_id; // should be declared outside of the class, because it has only 1 instance during whole program.
    int id;

public:
    Professor()
    {
        cur_id++;
        id = cur_id;
    }
    ~Professor();

    void getdata()
    {
        Person::getdata();
        cin >> pub;
    }
    void putdata()
    {
        Person::putdata();
        cout << pub << " " << id << endl;
    }
};

class Student : public Person
{
private:
    int marks[6];
    static int cur_id; // should be declared outside of the class. because it has only 1 instance during whole program.
    int id;

public:
    Student()
    {
        cur_id++;
        id = cur_id;
    }
    ~Student();

    void getdata()
    {
        Person::getdata();
        for (int i = 0; i < 6; i++)
        {
            cin >> marks[i];
        }
    }
    void putdata()
    {
        int sum = 0;
        for (int i = 0; i < 6; i++)
        {
            sum += marks[i];
        }
        Person::putdata();
        cout << sum << " " << id << endl;
    }
};

int Student::cur_id = 0;   // declared outside like this
int Professor::cur_id = 0; // declared outside like this

int main()
{

    int n, val;
    cin >> n; //The number of objects that is going to be created.
    Person *per[n];

    for (int i = 0; i < n; i++)
    {

        cin >> val;
        if (val == 1)
        {
            // If val is 1 current object is of type Professor
            per[i] = new Professor;
        }
        else
            per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.
    }

    for (int i = 0; i < n; i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;
}
