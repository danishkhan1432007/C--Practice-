#include<iostream>
#include<string>
using namespace std;
class person{
    public :
    string name;
    void inputname(){
        cout<<"Enter your name : ";
        getline(cin,name);
    }
};
class teacher : public person{
    public :
    string subject;
    void inputsubject(){
        cout<<"Enter the subject name : ";
        getline(cin,subject);
    }
    void display(){
        cout<<"\t Teacher information \n";
        cout<<"The name of the teacher is : "<<name<<endl;
        cout<<"The name of the subject is : "<<subject<<endl;
    }
};
int main (){
    teacher *prt = new teacher;
    prt->inputname();
    prt->inputsubject();
    prt->display();
    return 0;
}