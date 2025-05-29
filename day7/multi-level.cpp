#include<iostream>
using namespace std;

class Person{
    private:
        string name;
        int age;
    public:
        void setPersonDetails(string n,int a){
        name = a;
        age = a ;
        }
        void showPersonDetails(){
        cout<<"My name is"<<name<<",and I,m"<<age<<"years old."<<endl;
        }
};
class Employee : public Person{
private:
string company_name,emp_id;
public:
    void setEmpolyeeDetails(string compName,string empId){
        company_name=compName;
        emp_id=empId;
    }
    void showEmpolyeeDetails(){
        cout<<"I'm working in"<<company_name<<",my Employee ID is:"<<emp_id<<endl;
    }
};
class Developer : public Employee{
    private:
        string deptName;
        int experience;

    public:
       void setDeveloperDetalis(string dept,int exp){
            deptName=dept;
            experience=exp;   
        }


        void showDeveloperDetails(){
            cout<<"I'll be wrking in"<<deptName<<"department.I've"<<experience<<"years of  experience,"<<endl;

        }

};
int main(){
    string personName,companyName,dept_Name,employee_id;
    int personAge,devExperience;

    cout << "enter your name & Age:";
    cin >> personName >> personAge ;

    cout << "enter your company Name & Employee ID:";
    cin >> companyName >> employee_id;

        cout << "enter your Department Name & years of Experience:";
        cin >> dept_Name >> devExperience;

        Developer dev1;
        dev1.setPersonDetails(personName,personAge);
        dev1.setEmpolyeeDetails(companyName,employee_id);
        dev1.setDeveloperDetalis(dept_Name,devExperience);

        dev1.showPersonDetails();
        dev1.showEmpolyeeDetails();
        dev1.showDeveloperDetails();

}