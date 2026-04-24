#include <iostream>
using namespace std;

class EmployeeSalary
{
private:
    double salary;

public:
    void setSalary(double amount)
    {
        salary = amount;
    }

    double getSalary()
    {
        return salary;
    }

    EmployeeSalary operator+(EmployeeSalary second_employee)
    {
        EmployeeSalary result_employee;
        result_employee.salary = salary + second_employee.salary;
        return result_employee;
    }

    bool operator>(EmployeeSalary second_employee)
    {
        if (salary > second_employee.salary)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    EmployeeSalary employee1;
    EmployeeSalary employee2;
    EmployeeSalary total_employee_salary;

    double salary1;
    double salary2;

    cout << "Enter salary of first employee: ";
    cin >> salary1;

    cout << "Enter salary of second employee: ";
    cin >> salary2;

    employee1.setSalary(salary1);
    employee2.setSalary(salary2);

    total_employee_salary = employee1 + employee2;

    cout << "Total salary: " << total_employee_salary.getSalary() << endl;

    if (employee1 > employee2)
    {
        cout << "First employee has higher salary." << endl;
    }
    else
    {
        cout << "Second employee has higher salary." << endl;
    }

    return 0;
}
