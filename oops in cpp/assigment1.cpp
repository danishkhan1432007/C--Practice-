#include<iostream>
#include <string>
using namespace std;
class student{
    public: 
    string Name;
    int RollNo;
    int Marks;
    void setdata(){
        cout<<"Name: "; 
        getline(cin,Name);
        cout<<"Roll No: ";
        cin>>RollNo;
        cout<<"Marks: ";
        cin>>Marks;
        cin.ignore();
    
    }
    void displaydata(){
       
        cout<<"The name of the student is : "<<Name<<endl;
        cout<<"The RollNo of the student is : "<<RollNo<<endl;
        cout<<"The marks of the student is : "<<Marks<<endl;
    }
};
int main (){
    student s[4];
    for(int i=0;i<4;i++){
        cout<<"Student "<<i+1<<" : \n";
        s[i].setdata();
    }
    cout<<"THE INFORMATION OF THE STUDENT IN THE CLASS IS : \n";
    for(int i=0;i<4;i++){
        cout<<"Student "<<i+1<<" :\n";
        s[i].displaydata();
    }
    return 0;
}