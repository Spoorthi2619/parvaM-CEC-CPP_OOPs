#include<iostream>
using namespace std;
int main(){
    string  first_name,college ,branch;
    char sem;
    int age;
    cout << "enter your name:";
    cin >> first_name;
    cout << "enter your  college name in short-form:";
    cin >> college;
    cout << "enter your branch name in short-form:";
    cin >> branch;
    cout << "enter your age:";
    cin >> age;
    cout << "enter your semster:";
    cin >> sem;
    cout << "your name is "<< first_name <<",you're" << age << "years old.you're studying in" << college << "college in"<< branch << "branch in" <<sem << ",semster";
}