#include<iostream>
using namespace std;
void sayHello(){
    cout<<"Hello!"<<endl;
}
int  sayHi(string name){ // function with parameters
    cout << "Hi,"<<name<<endl;
}
int greet(string fName,string lName,int age){// functions with parameters
    cout<<"hi,"<<fName<<" "<<lName<<",age:"<<age<<endl;


    }

int main(){
    string firstName, lastName,friendName;
    int age;
    cout << "enter your first name:";
    cin>> firstName;
    cout <<" enter your last name:";
    cin >>lastName;
    cout<<"enter your age:";
    cin>>age;
    cout << "enter your friend's name:";
    cin >> friendName;
    sayHello();//function call
    sayHi(firstName); //function with argument
    sayHi(friendName);    // sayHello();
    greet(firstName,lastName,age);
}