#include <iostream>
using namespace std;
 class Interest{
    private:
    int principal,term,rate,totalInterest;
    float rateInPercent;

    public:
        int simpleinterest=0;
        Interest(){
        principal=0;
        term=0;
        rate=0;
        totalInterest=0;
        rateInPercent=0;
         cout<<"total Interest Earned:"<<totalInterest<<endl;
    }
    void setValues(int a, int y){
    principal=a;
    term=y;
  }
  void setRateValueInteger(int rateInInteger){
    rate=rateInInteger;
  }
  void setRateValueFloat(float rateInFloat){
    rateInPercent=rateInFloat;
  }
  
    Interest(int p, int t,int r){
        setValues(p,t);
        setRateValueInteger(r);
        totalInterest=(principal*term*rate)/100;
        cout<<"simple Interest for the following details:"<<endl;
        cout<<"principal Amount:"<<principal<<endl;
        cout<<" no.of years (term):"<<term <<endl;
       cout<<" rate of Interest(In Interger):"<<rate <<endl;
      totalInterest=principal+simpleinterest;
      cout<<"total   Interest Earned:"<<totalInterest<<endl;
    }
  
  Interest(int p, int t,float rateInDecimal){
    setValues(p,t);
    setRateValueFloat(rateInDecimal);
    simpleinterest=(principal*term*rateInPercent);
        cout<<"simple Interest for the following details:"<<endl;
        cout<<"principal Amount:"<<principal<<endl;
        cout<<" no.of years (term):"<<term <<endl;
        cout<<" rate of Interest(In Decimal):"<<rate <<endl;
         totalInterest=principal+simpleinterest;
        cout<<"total Interest Earned:"<<totalInterest<<endl;
  }
  
};
int main(){
    int amount,year,rateOfInterest;
    float interestRate;

    Interest int1;
    cout<<"enter  the principal Amount,No of years & Rate of Interest(eg.5):";
    cin>>amount>>year>>rateOfInterest;

    Interest int2(amount,year,rateOfInterest);

    cout<<"enter  the principal Amount,No of years & Rate of Interest(eg.0.05):";
    cin>>amount>>year>>rateOfInterest;

     Interest int3(amount,year,interestRate);



}