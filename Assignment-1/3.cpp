#include <iostream>
#include <string>
using namespace std;

// Base Class
class Person
{
protected:
    string name;
    int id;

public:
    void setPersonDetails()
    {
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter ID: ";
        cin >> id;
    }

    void displayPersonDetails()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
    }
};

// Derived Class: Student
class Student : public Person
{
private:
    string course;

public:
    void inputStudent()
    {
        setPersonDetails();
        cin.ignore();
        cout << "Enter Course: ";
        getline(cin, course);
    }

    void displayStudent()
    {
        cout << "\n--- Student Details ---" << endl;
        displayPersonDetails();
        cout << "Course: " << course << endl;
    }
};

// Derived Class: Faculty
class Faculty : public Person
{
private:
    string subject;

public:
    void inputFaculty()
    {
        setPersonDetails();
        cin.ignore();
        cout << "Enter Subject: ";
        getline(cin, subject);
    }

    void displayFaculty()
    {
        cout << "\n--- Faculty Details ---" << endl;
        displayPersonDetails();
        cout << "Subject: " << subject << endl;
    }
};

// Derived Class: Administrative Staff
class AdminStaff : public Person
{
private:
    string department;

public:
    void inputStaff()
    {
        setPersonDetails();
        cin.ignore();
        cout << "Enter Department: ";
        getline(cin, department);
    }

    void displayStaff()
    {
        cout << "\n--- Administrative Staff Details ---" << endl;
        displayPersonDetails();
        cout << "Department: " << department << endl;
    }
};

int main()
{
    Student s;
    Faculty f;
    AdminStaff a;

    cout << "Enter Student Details\n";
    s.inputStudent();

    cout << "\nEnter Faculty Details\n";
    f.inputFaculty();

    cout << "\nEnter Administrative Staff Details\n";
    a.inputStaff();

    s.displayStudent();
    f.displayFaculty();
    a.displayStaff();

    return 0;
}
