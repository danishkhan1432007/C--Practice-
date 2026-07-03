#include <iostream>
#include <string>
using namespace std;
class Employee{
    public :
    string EmpName;
    int EmpId;
    int salary;
    void setData(){
        cout<<"EmpName :";
        getline(cin,EmpName);
        cout<<"EmpId :";
        cin>>EmpId;
        cout<<"Salary :";
        cin>>salary;
    }
    void displayData(){
        cout<<"Emplayee Name : "<<EmpName<<endl;
        cout<<"Emplayee Id : "<<EmpId<<endl;
        cout<<"Salary : "<<salary<<endl;
    }
};

using namespace std;

int main(){
    Employee E1;
     Employee *ptr = &E1;
     ptr->setData();
     ptr->displayData();
    return 0;
}