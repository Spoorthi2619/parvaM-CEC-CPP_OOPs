#include<iostream>
using namespace std;

int main(){
    int age;
    int*ptrAge=&age;

    string name;
    string*namePtr=&name;
    cout<<"enter your age:";
    cin>>name>>age;

    cout<<"your name  is"<<(*namePtr)<<"'you're"<<(*ptrAge)<<"years old."<<endl;
    cout<<"the address of name is stored in pointer(namePtr):"<<namePtr<<endl;
    cout<<"the address of age is stored in pointer(PtrAge):"<<namePtr<<endl;


    int*num1=new int(5);
    cout<<"the value within the pointer num1:";
    //reference variable is not needed  for assigning the address to the pointer we can use new keyword
        cout<<"the value within the pointer num1:"<<(*num1);
        int size,array1[size];

        int *arr=new int[size];

        cout<<"enter the size of an array";
        cin>>size;

        cout<<"enter the"<<size<<"elements into an array:";
        for(int i=0;i<size;i++){
            cout<<arr[i]<<endl;
        }
    
}
