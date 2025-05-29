#include<iostream>
using namespace std;

class Calculate{
    public:
    //member data
    int num1,num2;

    float res;
    //declared the construstor & it is also a default constructor
    //ctrl +?:comment
    Calculate(){
         num1=5;
         num2=10;
    }
    //member function
    void showOutput(){
        cout<<"Addition:"<<num1+num2<<endl;
        cout<<"Substraction:"<<num1-num2<<endl;
        cout<<"multiplication:"<<num1*num2<<endl;
        cout<<"quotient:"<<num2/num1<<endl;
        cout<<"reminder:"<<num2%num1<<endl;
    }
};
int main(){
    Calculate c1;//object
    //assigning the value to the data members
    Calculate c2;
    c2.num1=25;
    c2.num2=30;
    c1.showOutput();
    c2.showOutput();
}