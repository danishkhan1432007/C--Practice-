#include <iostream>
#include <string>
using namespace std;
class danish {
    public :
    string name;
    int rollNo;
    float marks;
    void setdata(){
        cin.ignore();
        cout<<"Enter your name :";
        getline(cin,name);
        cout<<"Enter your roll no :";
        cin>>rollNo;
        cout<<"Enter your marks :";
        cin>>marks;
    }
    void printdata(){
        cout<<"\t Student Info : \n";
        cout<<"Name  : "<<name<<endl;
        cout<<"Roll no : "<<rollNo<<endl;
        cout<<"Marks :"<<marks<<endl;
    }
};
int main (){
    danish st1;
    danish st2;
    st1.setdata();
    st1.printdata();
    cout<<endl;
     st2.setdata();
    st2.printdata();
    return 0;  
}