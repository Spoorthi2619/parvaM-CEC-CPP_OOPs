#include<iostream>
using namespace std;
class Company{
    private:
    string cin;
    int totalworth=0;
    public:
    string gstNum,location;
    int numOfEmp;
    setDetails(string cinNum,int Worth){
        cin=cinNum;
        totalworth=Worth;
    }
    //getter method
    void getDetails(string gstNumber){
        cout<<"corporate Identity Number:"<<cin<<endl;
        cout<<"Total Worth of the Company:"<<totalworth<<endl;
    }
    void getBasicDetails();//Declare the member function
};
//function definition outside the class
void Company :: getBasicDetails(){//scope resolution operator
    cout<<"GST Number:"<<gstNum<<endl;
     cout<<"location:"<<location<<endl;
    cout<<"Number of Employees:"<<numOfEmp<<endl;
    }
    int main()
    {
        Company comp1;//object created
        
        comp1.gstNum="12345ABCD678";
        comp1.location="Bengaluru";
        comp1.numOfEmp=50;
        comp1.getBasicDetails();
       
        string  cinNumber;
        int companyWorth;

        cinNumber="123456789";
        companyWorth=100000;

        comp1.setDetails(cinNumber,companyWorth);
        comp1.getDetails(comp1.gstNum);
    }