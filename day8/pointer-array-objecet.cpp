#include <iostream>
using namespace std;

class Employee
{
private:
    string employeeId, employeeName;
    int experience;
    float salary;

public:
    void addDetails(string id, string name, int exp, float salary)
    {
        employeeId = id;
        employeeName = name;
        experience = exp;
        this->salary = salary;
    }
    void showDetails()
    {
        cout << "the employee with name" << employeeName << "bearing" << employeeId << "have" << experience << "years of experience and receives a salary of rs," << salary << "/-";
    }
};
class Skill : public Employee
{
private:
    int skillCount;
    string skills[10];

public:
    void setSkills(int count)
    {
        skillCount = count;
        cout << "enter the" << count << "technologies you're familiar with:" << endl;
        for (int i = 0; i < count; i++)
        {
            cout << "skills:" << i+1<<endl;
            cin>>skills[i];
        }
    }
    void showSkills()
    {

        cout << "skills known:" << endl;
        for (int i = 0; i < skillCount; i++)
        {
            cout << "-" << skills[i] << endl;
        }
    }
};
int main()
{
    string emp_name, emp_id;
    int emp_exp, skill_count;
    float emp_salary;

    cout << "enter the following details of the employee:";
    cout << "Employee ID,Name, years of experience,salary" << endl;
    cin >> emp_id >> emp_name >> emp_exp >> emp_salary;

    Skill s1;
    Skill *emp1 = &s1;

    emp1->addDetails(emp_id, emp_name, emp_exp, emp_salary);
    emp1->showDetails();

    cout << "enter the number of technologies you know:" << endl;
    cin >> skill_count;
    emp1->setSkills(skill_count);
    emp1->showDetails();

    emp1->showSkills();
}