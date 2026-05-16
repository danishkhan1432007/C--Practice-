#include <iostream>
using namespace std;
int main(){
    int price , total = 0;
while (true){
    cout<<"Enter the item price: ";
    cin>>price;
    if(price == 0){
        continue;
    }
    total = total + price;
    if(total > 5000){
        cout<<"Your total price is  "<<total<<endl;
        break;
    }

}
    cout<<"Budget exceeded! stoping. ";

    return 0;
}