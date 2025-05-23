#include<iostream>
using namespace std;
class Customer{
    public:
    string firstName,lastName;
    int age,rating;

    //initialized the constructor
    Customer(){
        firstName="john";
        lastName="doe";
        age=10;
        rating=5;
    }
    void showDetalis(){
        cout<<"customer Name:"<<firstName<<" "<<lastName<<endl;
        cout<<"customer Age:"<<age<<endl;
    }
    void giveRating(int rate);//declared the member function
    void showRating(){
        cout<<"you've given"<<rating<<"star rating.thank you!"<<endl;
    }
};
//scope resolution operator
void Customer:: giveRating(int rate){
    rating=rate;

}
int main(){
Customer cust1//invoked the constructor to assign the default value
cust1.showDetalis();
cust1.showRating();
 
Customer cust2;

cust2.firstName="spoorthi";
cust2.lastName="shaiva";
cust2.age=18;
int starRating;
cout<< "give your Rating(0 to 5):";
cin>> starRating;
cust2.giveRating(starRating);
cust2.showRating();
}