#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream write("a.txt");
    write <<"Good Morning Students,"<<endl;
    write <<"We shall work on file Handling"<<endl;
    write.close();//closing the file after writing

    ofstream fout("f.txt");
    fout<<"written in the file using another user-defined object:fout";
    fout.close();

    //we can use any word to make an object,ex:write,out,fout,fwrite,etc
    ofstream fin("a.txt");
    char letter;
    fin.get(letter);
    cout<<"the first letter of the file is"<<letter<<endl;
    fin.close();
    out<<"the first letter of the file is:"<<letter;
    out.put('G');
    out<<"ood morning!";
    out.close();
}