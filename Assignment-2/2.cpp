#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    float marks;

public:
    // Constructor
    Student(int r, string n, float m)
    {
        rollNo = r;
        name = n;
        marks = m;
    }

    void display()
    {
        cout << "Roll No : " << rollNo << endl;
        cout << "Name    : " << name << endl;
        cout << "Marks   : " << marks << endl;
    }
};

int main()
{
    Student s1(101, "Rahul", 89.5);

    cout << "Student Details\n";
    s1.display();

    return 0;
}
