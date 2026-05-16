#include <iostream>
using namespace std;
int main(){
    int salary = 0, employees = 10;
    
    for(int i = 1;i<=employees;i++){
        cout<<"Enter the salary of Emplayee "<<i<<" : ";
        cin>>salary;
    
        if (salary < 30000 ){
            continue;
        }    
        else {
            cout<<"The salary of the Employee "<<i<<" is "<<salary<<"Rs which is greater then 30000 \n";
        }

    }
    
    return 0;
}
