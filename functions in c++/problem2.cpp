#include <iostream>
using namespace std;
int calculateTicketPrice(int age){
    
    int price;
    if (age < 12){
    price = 200;
        cout<<"Sir your child is less than 12 years so the ticket price is Rs = 200 \n ";
    }
    else if (age <= 59){
    price = 500;
        cout<<"Sir your are Adult so your ticker price is Rs = 500 \n ";
    }
    else{
    price = 300;
        cout<<"Yor are senior so your ticket price is Rs = 300 \n ";
    }
    return price;
}
int main (){
    int finalprice = calculateTicketPrice(81);
    cout<<"The final price of the Ticket is : "<<finalprice<<endl;

    return 0;
}