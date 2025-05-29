#include<iostream>
using namespace std;

int main(){
    int a;
    int *ptr=&a;
    float decimal;
    float *f = &decimal;

    cout<< "Enter the value of a:";
    cin>>a;

    cout<<"enter any decimal value:";
    cin>>decimal;
   
    cout<<"value of a:"<<a<<endl;
    cout<<"Address of a"<<&a<<endl;
    cout<<"Value of Pointer(ptr):"<<ptr<<endl;
    cout<<"Address of ptr:"<<&ptr<<endl;
    cout<<"Value Address pointed by ptr:"<<*ptr<<endl;

 cout<<"value of a:"<<a<<endl;
    cout<<"Address of a"<<&a<<endl;
    cout<<"Value of Pointer(ptr):"<<ptr<<endl;
    cout<<"Address of ptr:"<<&ptr<<endl;
    cout<<"Value Address pointed by ptr:"<<*ptr<<endl;
}