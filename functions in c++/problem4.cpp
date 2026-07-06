#include <iostream>
using namespace std;
auto calculatefare( float distance , bool isNight ){
    float charge , subTotal , BaseFare = 100 , nightcharges , Total = 0;
    cout<<"The base fare of the ride is "<<BaseFare<<endl;
    charge = distance * 15;
    cout<<"The distance charges is = "<<charge<<endl;
    subTotal = charge + BaseFare;
    cout<<"The subtotal charges is  = "<<subTotal<<endl;
    if (isNight){
        nightcharges = subTotal * 0.20;
        cout<<"There is night charges also included : "<<nightcharges<<endl;
        cout<<"The total charges is : ";
        Total = subTotal + nightcharges;
        cout<<Total<<endl;
    }
    else {
        cout<<"There is no any night charges included \n";
        cout<<"The total charges is : ";
        Total = subTotal;
        cout<<Total<<endl ;
    }
    return Total;
}
int main(){
    double distance;
    bool isNight;
    cout<<"Enter the number of distance (Kms) the car travelled : ";
    cin>>distance;
    cout<<"It is night ride (Type 1 for true and 0 for false): ";
    cin>>isNight;
    float Totalprice = calculatefare(distance , isNight);
    cout<<"Final price : "<<Totalprice<<endl;

    return 0;
}