#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;

public:
    // Constructor
    Student(int r, string n)
    {
        rollNo = r;
        name = n;
        cout << "Constructor Called for " << name << endl;
    }

    // Destructor
    ~Student()
    {
        cout << "Destructor Called for " << name << endl;
    }

    void display()
    {
        cout << "Roll No : " << rollNo << endl;
        cout << "Name    : " << name << endl;
    }
};

int main()
{
    Student s1(101, "Rahul");
    Student s2(102, "Priya");

    cout << "\nStudent Details\n";
    s1.display();
    s2.display();

    return 0;
}
