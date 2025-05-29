#include<iostream>
using namespace std;

class Increment{
    private:
    int number,value;

    public:
    void setNumber (int num){
        number = num;
    }
//syntax for operator overloading:

void operator--(){
    value = number-1;
}
void operator++(){
    value = number+1;
}
void showValue(){
    cout<<"before Incrementing:"<<number<<endl;
    cout<<"after Incrementing:"<<value<<endl;
    cout<<"before Incrementing:"<<number<<endl;
        cout<<"after Incrementing:"<<value<<endl;
}
};
int main(){
    int n;
    cout<<"enter any number for incrementing its value by 1:";
    cin>>n;
    Increment num1;
    num1.setNumber(n);
    ++num1;
    --num1;
    num1.showValue();

    cout<<"Number after Incrementing:"<<++n<<endl;
    cout<<"Number after Incrementing:"<<--n<<endl;
}