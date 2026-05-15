#include<iostream>
using namespace std;
int main(){
    int day;
    double GB = 0 , total = 0;
    cout<<"Enter the number of days that user have used the Data(GB) price per day is 50Rs: ";
    cin>>day;
    for (int  i = 1 ; i <= day; i++) {
        cout<<"Enter the number of GB used on day "<<i<<": ";
        cin>>GB;
        total = total + GB;
    } 
    cout<<"Total Data Used : "<<total<<" GB "<<endl;
    cout<<"THe total bill of your data usage is : "<<total*50<<" Rs "<<endl;
    if (total >30 ){
        cout<<"Warning you have exceded the 30 GB of the Data limit! ";
    }
    return 0;
}