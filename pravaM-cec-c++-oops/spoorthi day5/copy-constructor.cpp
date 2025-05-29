#include<iostream>
using namespace std;


class Teacher{
    private:
    string branch;
    public:
    string name, qualification;
    int experience;
    Teacher(){
        branch="AIML";
        name="spoorthi";
        qualification="M.TECH";
        experience=5;
        cout<<"Welcome,spoothi!"<<endl;
    }

    void setData(string Tname,string Tbranch,string Tqual,int exp){
        name=Tname;
        branch=Tbranch;
        qualification=Tqual;
        experience=exp;
    }

    Teacher(string TeacherName,string TeacherBranch,string TeacherQual,int TeacherExp){ //setter
        setData(TeacherName,TeacherBranch,TeacherQual, TeacherExp);
        cout<<"welcome"<<name<<"to"<<branch<<","<<endl;
        cout<<"you've graduated with,"<<qualification<<"degree.And you've"<<experience<<"years of experience"<<endl;
    }
    //syntax for copy constructor : constructor(reference constructor address-of-the-object)
    Teacher (Teacher &t){ // copy constructor
        name=t.name;
        branch=t.branch;
        qualification=t.qualification;
        experience=t.experience;

    }
    void getData() { //getter
           cout<<"welcome"<<name<<"to"<<branch<<","<<endl;
        cout<<"you've graduated with,"<<qualification<<"degree.And you've"<<experience<<"years of experience"<<endl;
    }

    ~Teacher(){//destructor
        cout<<"object's work is done,clearing the memory!"<<endl;

    }
    
    

};
int main(){
    string n,q,b;
    int e;
     
    Teacher teacher1;
    cout<<"enter your name,  qualification,branch";
    cin>>n>>q>>b>>e;

    Teacher teacher2(n,q,b,e);
    Teacher teacher3=teacher2;
    teacher3.getData();

}