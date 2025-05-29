#include<iostream>
using namespace std;
class Area{
    private:
    int length,breadth;
    public:
    int result;
        Area(){// default constructor(no parameters)
            length=0;
            breadth=0;

        }
        Area(int a, int b){//parameterized constructor(eg.2 Parameters)
        length=a;
        breadth=b;    
        }
        void calculateArea(){
            result=length*breadth;
            cout<<"area of rectangle with length:"<<length<<"and breadth:"<<breadth<<"is equal to"<<result<<endl;
        }
    };
        int main(){
            int len,wid;
            Area rect1;//object 1 created
            rect1.calculateArea();
            cout<<"enter the length and breath for finding the Area of Rectangle:";
            cin>>len>>wid;
            Area rect2(len,wid);//object2 Created
            rect2.calculateArea();

        }
        

        