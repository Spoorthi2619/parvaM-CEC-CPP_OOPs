#include<iostream>
using namespace std;

class Employee{
    private:
    string employeeId,employeeName;
    int experience;
    float salary;
    public:
    void addDetails(string id,string name,int exp,float salary){
        employeeId=id;
        employeeName=name;
        experience=exp;
        this->salary=salary;
    }
    void showDetails(){
        cout<<"the employee with name"<<employeeName<<"bearing"<<employeeId<<"have"<<experience<<"years of experience and receives a salary of rs,"<<salary<<"/-";

    }
};
int main()
{
    string empName,empId;
    int empExp;
    float empSalary;
    cout<<"enter your name,employee-ID,years of experience &Salary:";
    cin>>empName>>empId>>empExp>>empSalary;

    Employee emp1;
    Employee*empPtr=&emp1;

    (*empPtr).addDetails(empId,empName,empExp,empSalary);
    (*empPtr).showDetails();
    
    Employee *ptrEmp=new Employee;
    ptrEmp->addDetails("PM123","Ajay",3,5000000);
    ptrEmp->showDetails();
//emp1.addDetails<==>(*empptr).addDetails<==>empPtr->addDetails
    }