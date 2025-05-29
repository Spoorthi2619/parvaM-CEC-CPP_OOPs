#include <iostream>
using namespace std;
class Base
{
public:
    void showBase()
    {
        cout << "Base member function has been called!"<<endl;
    }
};
class Derived:public Base{
    public:
    void showBase(){
        cout<<"Derived member function has been called!"<<endl;
    }
};
class Animal
{
public:
    void makeSound()
    {
        cout << "Animal makes some sounds!";
    }
};

class Dog : public Animal
{
public:
    void makeSound()
    {
        Animal ::makeSound();
        cout << "dog barks!" << endl;
    }
};
class Cat : public Animal
{
public:
    void makeSound()
    {
        cout << "cat meows!" << endl;
    }
};
int main()
{
    //Base b1;
    Derived d1;
    d1.showBase();
    Dog dog1;
    dog1.makeSound();


    Cat cat1;
    cat1.makeSound();
}
