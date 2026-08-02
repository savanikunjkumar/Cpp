#include <iostream>
#include <string>
using namespace std;

// Base Class
class Patient
{
protected:
    string name;
    int patientID;

private:
    string disease;   // Encapsulated data

public:
    void inputPatient()
    {
        cout << "Enter Patient Name: ";
        getline(cin, name);

        cout << "Enter Patient ID: ";
        cin >> patientID;
        cin.ignore();

        cout << "Enter Disease: ";
        getline(cin, disease);
    }

    void displayPatient()
    {
        cout << "Patient Name : " << name << endl;
        cout << "Patient ID   : " << patientID << endl;
        cout << "Disease      : " << disease << endl;
    }
};

// Derived Class
class Doctor : public Patient
{
public:
    void prescribeMedicine()
    {
        cout << "Doctor: Medicine Prescribed Successfully." << endl;
    }
};

// Derived Class
class Administrator : public Patient
{
public:
    void manageRecords()
    {
        cout << "Administrator: Patient Records Updated." << endl;
    }
};

int main()
{
    Doctor doctor;
    Administrator admin;

    cout << "Enter Patient Details:\n";
    doctor.inputPatient();

    cout << "\n--- Doctor Access ---\n";
    doctor.displayPatient();
    doctor.prescribeMedicine();

    cout << "\n--- Administrator Access ---\n";
    admin.manageRecords();

    return 0;
}
