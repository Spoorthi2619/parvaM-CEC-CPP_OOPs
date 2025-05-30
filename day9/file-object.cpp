#include<iostream>
#include<fstream>
using namespace std;
class Car {
    private:
    string brand,model,varient,features[10];
    int year,price,featureCount;
    public:
        void addCarDetails(string carBrand, string carModel, string carVarient, int Year, int Price) {
            brand = carBrand;
            model = carModel;
            varient=carVarient;
            this->year=year;
            this->price=price;
        }
        void addCarFeatures(int count){
            featureCount=count;
            cin.ignore();
            cout<<" Enter the "<<count<<" features of the car";
            for ( int i=0; i<count; i++) {
                cout<<"features -"<<i+1<<":";
               getline(cin,features[i]); // can enter multiple words along with space
        }
        cout<<"click enter button for next Input"<<endl;//add this line
    }
        void storeCarDetails(){
            ofstream store("car_details.txt");
            store<<" The car details are as follows : "<< endl;
            store<<" Car Brand : "<< brand<< endl;
            store<<" Car Model : "<< model<< endl;
            store<<" Car varient : "<< varient<< endl;
            store<<" Launch year : "<< year<< endl;
            store<<"offer Price: Rs, "<< price << endl;
            store<<"Car has these features:"<< endl;
            for(int i=0;i<featureCount;i++){
                store << "\t" << i+1 << "." << features[i] << endl;
            }
            store<<"-----------------------------------";
        }


};
int main() {
string car_brand,car_model,car_varient,car_features[10];
int features_count,launch_year,launch_price;

cout << "Enter the car Details:" << endl;
cout << "brand,Model,varient,Launch year,Launch Price:" <<endl;
cout << "Ex:tata,curvv,(petrol/disel/EV),2025,15000000";
cin >> car_brand >> car_model >> car_varient >> launch_year >> launch_price;

cout<<"enter the number of features:"<<endl;
cin >> features_count;

Car car1;
car1.addCarDetails(car_brand,car_model,car_varient,launch_year,launch_price);
car1.addCarFeatures(features_count);
car1.storeCarDetails();


Car car2;
car2.addCarDetails("tata","curvv","petrol",2025,100000);
car2.addCarFeatures(4);
car2.storeCarDetails();

}