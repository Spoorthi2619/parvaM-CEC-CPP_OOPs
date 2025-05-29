#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream  out("sample.txt");
    string name;
    int age;
cout<<"enter your name and age:";
cin>>name>>age;
out<<"Hello"<<name<<"!"<<endl;
out<<"you're"<<age<<"years old."<<endl;
out.close();

ifstream read ("abd.txt");
string line;;
cout<<"file Contains:"<<line<<endl;
while(getline(read,line)){
cout<<line<<endl;}
read.close();
}


