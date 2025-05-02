#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Person
{
public:
    std::string name;
    std::string age;

    virtual void getdata() {};
    virtual void putdata() {};
};

class Professor : public Person
{
public:
    int publications;
    static int cur_id;
    int my_id;

    Professor()
    {
        cur_id++;
        my_id = cur_id;
    };

    void getdata()
    {
        cin >> name >> age >> publications;
    };

    void putdata()
    {
        cout << name << " " << age << " " << publications << " " << my_id << endl;
    };
};

class Student : public Person
{
public:
    int marks[6];
    static int cur_id;
    int my_id;

    Student()
    {
        cur_id++;
        my_id = cur_id;
    };

    void getdata()
    {
        cin >> name >> age;

        for (int i = 0; i < 6; i++)
        {
            int mark;
            cin >> mark;
            marks[i] = mark;
        }
    };

    void putdata()
    {
        int sum = 0;

        for (int i = 0; i < 6; i++)
        {
            sum += marks[i];
        }

        cout << name << " " << age << " " << sum << " " << my_id << endl;
    };
};

int Professor::cur_id = 0;
int Student::cur_id = 0;

int main()
{

    int n, val;
    cin >> n; // The number of objects that is going to be created.
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
