#include <iostream>
using namespace std;
int main(){
    int fuel;
    int distance = 50;
    cout<<"Enter current fuel level: ";
    cin>>fuel;
    while (fuel > 0){
        cout<<"After "<<distance<<" km the fuel level is "<<fuel - 4<<" liters"<<endl;
        fuel -= 4;
        distance += 50;
    }
    cout<<"Car has run out the fuel \n ";
    return 0;
}