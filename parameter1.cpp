#include<iostream>
using namespace std;

class Wish{
    private:
        string name;
        int age;
        public:
        Wish(){ //default constructor
            name="unknown";
            age=0;
        }
        Wish(string n,int a);//parameterzied constructor
        void birthdayWishes();
    };
    Wish::Wish(string n,int a){//deining the rules of parameterized constructor outside the class using scope resolution operator
        name=n;
        age=a;
    }
    void Wish::birthdayWishes(){
        cout<<"happy birthday"<<name<<"! Now you're"<<age<<"years old."<<endl;

    }
    
    int main(){
        string personName;
        int personAge;

        Wish person1;//object declared
        person1.birthdayWishes();
        cout<<"enter your name:";
        cin>>personName;
        cout<<"enter your age:";
        cin>>personAge;
        Wish person2(personName,personAge);
        person2.birthdayWishes();
    }