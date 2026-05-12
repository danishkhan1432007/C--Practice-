#include<iostream>
using namespace std;
int main(){
    int num , reversed = 0;
    cout<<"Enter number that you want to make its reverse : ";
    cin>>num;
    while (num > 0){
        reversed =reversed * 10 + num % 10;
        num/= 10;
        }
        cout<<"The number in reverse order is : \n";
        cout<<reversed<<endl;
    return 0;
}