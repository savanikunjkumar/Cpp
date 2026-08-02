#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int studentID;
    string name;
    string department;
    float marks;

public:
    void input()
    {
        cout << "Enter Student ID: ";
        cin >> studentID;

        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Department: ";
        getline(cin, department);

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "\n----- Student Record -----" << endl;
        cout << "Student ID : " << studentID << endl;
        cout << "Name       : " << name << endl;
        cout << "Department : " << department << endl;
        cout << "Marks      : " << marks << endl;
    }
};

int main()
{
    Student s1;

    s1.input();
    s1.display();

    return 0;
}
