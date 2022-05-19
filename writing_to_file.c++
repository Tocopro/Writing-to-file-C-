
#include <iostream>
#include <fstream>

using namespace std;

class Patient
{
public:
    string name1, name2, age, gender;
    void patient_name1()
    {
        cout << "Enter Patients Name: " << endl;
        cin >> name1;
    }
    void patient_name2()
    {
        cout << "Enter Patients Second Name: " << endl;
        cin >> name2;
    }
    void patients_age()
    {
        cout << "Enter Patients Age: " << endl;
        cin >> age;
    }
    void patients_gender()
    {
        cout << "Enter Patients Gender: " << endl;
        cin >> gender;
    }
};

int main() {

    Patient new_patient;
    new_patient.patient_name1();
    new_patient.patient_name2();
    new_patient.patients_age();
    new_patient.patients_gender();
    ofstream patients_file;
    patients_file.open(R"(C:\Users\NEAK\Downloads\patient_file1.txt)", ios::out);
    if (patients_file.is_open())
    {
        patients_file << "Welcome to the Health Center " << endl;
        patients_file << "New Patients Name: " + new_patient.name1 + " " + new_patient.name2  << endl;
        patients_file << "New Patients Age: " + new_patient.age << endl;
        patients_file << "New Patients Gender: " + new_patient.gender << endl;
        patients_file.close();
    } else
    {
        cout << "Invalid, File Not Available:";
    }

    return 0;
}

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream patient_file1;
    patient_file1.open(R"(C:\\Users\\NEAK\\Downloads\\patient_file1.txt)", ios::in);
    if (patient_file1.is_open())
    {
        string line;
        while (getline(patient_file1, line))
        {
            cout << line << endl;
        }
        patient_file1.close();
    }
    else
    {
        cout << "File Name is Invalid";
    }


}


