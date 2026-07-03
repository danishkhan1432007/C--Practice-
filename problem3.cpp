#include <iostream>
using namespace std;
class patient{
    public :
    string patientname;
    int age;
    string disease;
    void setdata(){
        cout<<"PatientName : ";
        cin>>patientname;
        cout<<"age : ";
        cin>>age;
        cout<<"disease : ";
        cin>>disease;
    }
    void display(){
        cout<<patientname;
        cout<<age;
        cout<<disease;
    }
};
int main(){
    patient *ptr = new patient;
    ptr -> setdata();
    ptr -> display();
    return 0;
}