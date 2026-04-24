#include <iostream>
using namespace std;



class Staff
{
public:
    void showRole()
    {
        cout << "Staff works in the hospital." << endl;
    }
};

class Doctor : public Staff
{
public:
    void showRole()
    {
        cout << "Doctors treat patients and give prescriptions." << endl;
    }
};

class Nurse : public Staff
{
public:
    void showRole()
    {
        cout << "Nurses care for patients and assist doctors." << endl;
    }
};



int main()
{
    Doctor doctor_object;
    Nurse nurse_object;

    doctor_object.showRole();
    nurse_object.showRole();

    return 0;
}
