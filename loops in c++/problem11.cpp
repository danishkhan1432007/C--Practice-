#include <iostream>
using namespace std;
int main(){
    int pin;
    do{
        cout<<"please sir enter your ATM PIN: ";
        cin>>pin;
        if(pin != 1234){
            cout<<"Your PIN is wrong \n";
        }
        else {
        cout<<"Access garanted! Wellcome \n";
        break;
        }
    }while(true);
    return 0;
}