#include<iostream>
using namespace std;

class Parent{
    private:
    int net_worth=0;
    public:
    string family_name, family_head;
    int number_of_members;

    void setData(int worth,string familyName,string familyHead,int member_count){
        net_worth=worth;
        family_name=familyName;
        family_head=familyHead;
        number_of_members=member_count;
    }
    int showNetworth(){
        cout<<net_worth;
    }
    int getFamilyInfo(){
        cout<<"I'm from"<<family_name<<"family,and my family head is"<<family_head<<",our Family's Net-worth is about"<<showNetworth()<<endl;
    }


};
//syntax for declaring the derived class:
//class derived-class-name:accessibility mode
//by Default :derived class uses private accessibility mode
//if derived class uses private accessibility mode then public data &
//member function of the base class will become private
//if derived class uses public acccessiblity mode then public data &
//member functiom of  the base class will remain public


// class child: Parent{ // derived class(by default private)
//  class child:public Parent{ // derived class(private-accessibility-mode)
 class child:public Parent{ // derived class
    public:
        string member_name;
        int age;
        void addDetails(string name,int person_age){ //member function
        member_name=name;
        age=person_age;
        
        }
        void getFamilyDetails(){
            cout<<"My name is"<<member_name<<"and i'm"<<age<<"years old. And i'm from"<<family_name<<"family,and my family head is"<<family_head<<",our family's Net-worth is about"<<showNetworth();
        }
};
int main(){
    string fName,fHead,cName;
    int childAge,fWorth,fMembers;

    cout<<"enter your family name,family head,number of members & networth:";
    cin>>fName>>fHead>>fMembers;
    Parent p1;
    p1.setData(fWorth,fName,fHead,fMembers);
    p1.getFamilyInfo();

    cout<<"enter your name & age:";
    cin>>cName>>childAge;

    child c1;
    //c1.family_head;(As child class is derived with public-accessibility mode)
    //we can directly access the public data of the  base class
    c1.setData(fWorth,fName,fHead,fMembers);//add this line
    c1.addDetails(cName,childAge);
    c1.getFamilyDetails();
}