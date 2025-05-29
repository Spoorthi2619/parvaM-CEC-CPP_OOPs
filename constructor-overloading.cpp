#include<iostream>
using namespace std;

class Area{
    private:
    int length,breadth,heigth;
    float radius;

    public:
    int result;
    Area(){//default constructor
        length=0;
        breadth=0;
    radius=0;
}
Area(int a){
    length=a;
    result=length*length;
    cout<<"Area of Square:"<<result<<endl;
}
Area(int c,int d){
    length=c;
    breadth=d;
    result=length*breadth;
        cout<<"Area of Rectangle:"<<result<<endl;

}
Area(float r){
    radius=r;
    result=2*3.142*radius;
        cout<<"Area of Circle:"<<result<<endl;

}
Area(int l,int b,int h){
    length=l;
    breadth=b;
    heigth=h;
    result = length*breadth*heigth;
    cout<<"Area of cube!"<<result<<endl;
}
};
int main(){
    Area a1();
    int len,wid,hgt;
    float rad;
    cout<<"enter the length of the square:";
    cin>>len;
    Area a2(len);
    cout<<"enter the length and breadth of the rectangle:";
    cin>>len>>wid;
    Area a3(len,wid);
    cout<<"enter the radius of the circle:";
    cin>>rad;
    Area a4(rad);
    cout<<"enter the length,breadth & heigth of the cube:";
    cin>>len>>wid>>hgt;
    Area a5(len,wid,hgt);

}