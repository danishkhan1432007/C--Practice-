#include <iostream>
using namespace std;
int calculateBill(int units){
    int price1 = 0 , price2 = 0 , price3 = 0 , totalprice ;
    if(units <= 100){
        price1 = units * 5;
        cout<<"The price of the "<<units<<" units is :"<<price1<<endl;
    }
    else if (units <= 200){
     price1 = 100 * 5;
     price2 = (units - 100) * 7;
     cout<<"The price of the first 100 units is :"<<price1<<endl;
     cout<<"The price of the second 100 units is :"<<price2<<endl;   
    }
    else {
        price1 = 100 * 5;
        price2 = 100 * 7;
        price3 = (units - 200) * 10;
        cout<<"The price of first 100 units is :"<<price1<<endl;
        cout<<"The price of second 100 units is :"<<price2<<endl;
        cout<<"The price of remaing "<<units-200<<" units is :"<<price3<<endl; 
    }
    return totalprice = price1 + price2 + price3 ;
}
int main(){
    int units;
    cout<<"Enter the units consumed : ";
    cin>>units;
    int bills = calculateBill(units);
    cout<<"Total electricity bill is Rs = "<<bills<<endl;
    return 0;
}