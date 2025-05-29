#include<iostream>
using namespace std;

class Complex{
int real,imaginary;//private  Member
public:
 Complex(){
    real=0;
    imaginary=0;
 }
 Complex (int r,int i)
 {

real=r;
imaginary=  i;
 }
Complex operator +(const Complex &c){
    Complex temp;
    temp.real=real+c.real;
    temp.imaginary=imaginary+c.imaginary;
    return temp;
   
}
void showSum(){
    cout<<"sum of 2 Complex Numbers:"<<real<<"+"<<imaginary<<"i"<<endl;

}
};
int main(){
    int r1,r2,i1,i2;
    cout<<"enter the first Complex Numbers(real number & imaginary number:eg.5+3i):"<<endl;
    cin>>r1>>i1;

     cout<<"enter the second Complex Numbers(real number & imaginary number:eg.10+6i):"<<endl;
     cin>>r2>>i2;
     
     Complex comp1(r1,i1);
     Complex comp2(r2,i2);
     Complex sum= comp1 + comp2;

      cout<<" First Complex Numbers:"<<r1<<"+"<<i1<<"i";
      cout<<" Second Complex Numbers:"<<r2<<"+"<<i2<<"i";
      sum.showSum();
}


