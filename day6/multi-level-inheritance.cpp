#include<iostream>
using namespace std;
class Animal{
    string name;
    public:
        void setName(string animalName){
            name = animalName;
        }
        void showAnimal(){
            cout<<"Name of the AnimaL:"<<name<<endl;
    }
    };
//Animal -> Carnivore(symbolic representation)
class Carnivore : public Animal{//derived class/base class-level 01.

    string vegetation;
    public:
        void setFood(string food){
            vegetation=food;
        }
        string showFood(){
            cout<<"Food Type of Animal:"<<vegetation<<endl;
        }
};
class Mammal:public Carnivore{
        string habitat;
        public:
        void setHabitat(string place){
            habitat=place;
        }
        void showHabitat(){
            cout<<"living place:"<<habitat<<endl;
        }
};
int main(){
    string animal_name,food_type,place_of_living;
    cout<<"enter the name of the animal and food type and place of living:";
    cin>>animal_name>>food_type>>place_of_living;


    Carnivore c1;
    c1.setName(animal_name);
    c1.setFood(food_type);

Mammal m1;
m1.setFood(animal_name);
m1.setFood(food_type);
m1.setHabitat(place_of_living);


m1.showAnimal();
m1.showFood();
m1.showHabitat();
}