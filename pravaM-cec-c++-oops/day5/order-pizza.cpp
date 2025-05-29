#include<iostream>
using namespace std;

class Pizza{
    private:
        string secretIngredient;
        public:
            string pizzaType,size;
            int price;
            bool isPaymentDone;
        
            void orderPizza(){
                cout<<"order the pizza by selecting your favorite pizza:"<<endl;
            }
            
            void bookPizza(){
                cout<<"Booking Pizza!"<<endl;
            }


            void bakePizza(string type,string pizzaSize){
                pizzaType=type;
                size=pizzaSize;
                cout<<"pizza Type:"<<pizzaType<<",Size"<<size<<endl;

            }
            void addIngredient(string secret){
                secretIngredient=secret;
             }
             void confirmOrder(){
                cout<<"order confirmed!"<<endl;

             }
             bool checkPayment(int money,bool payment){
                price=money;
                isPaymentDone=payment;
                if(isPaymentDone==true){
            cout<<"Amount Paid:rs."<<price<<"payment Successful"<<endl;
            confirmOrder();
            bookPizza();
            return true;
        } else{
            cout<<"Amount due:rs."<<price<<",payment pending!"<<endl;
            return false;
        }
        }
        void servePizza(int amount,bool paid,string typeOfPizza,string sizeOfPizza,string secretItem){
            if(!checkPayment(amount,paid)){
                cout<<"order cancelled due to the pending payment";
                return;
            }
            
            bookPizza();
            bakePizza(typeOfPizza,sizeOfPizza);
            addIngredient(secretItem);
cout<<"Pizza Served!Enjoy yout pizza";
        }
};
int main(){
    string pizType,size,secretIng;
    int pizzaAmount;
    bool amountPaid;

    Pizza customer1;
    customer1.orderPizza();

    cout<<"enter the  pizza Type(veg/Non-veg),size(Regular/Medium/Large):";
    cin>>pizType>>size;

   pizzaAmount=399;
   cout<<"did the pay the amount(type'1' if paid/type'0' if not paid)";
    cin>>amountPaid;
    customer1.servePizza(pizzaAmount,amountPaid,pizType,size,secretIng);


}