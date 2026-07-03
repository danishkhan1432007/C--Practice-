#include <iostream>
#include <string>
using namespace std;
class BooksMeg{
    public :
    string BookTitle;
    string AuthorName;
    int Price;
    void setData(){
        cout<<"Book Title : ";
        getline(cin,BookTitle);
        cout<<"Author Name : ";
        getline(cin,AuthorName);
        cout<<" price : ";
        cin>>Price;
        cin.ignore();
    }
    void displayData(){
        cout<<"Book Title : "<<BookTitle<<endl;
        cout<<"Author Name : "<<AuthorName<<endl;
        cout<<"Price : "<<Price<<endl;
    }
};

int main (){
    BooksMeg B[5];
    for (int i=0 ;i<5 ;i++){

        cout<<"Book "<<i+1<<endl;
        B[i].setData();
    }
    cout<<"\n The information is \n";
    for (int i=0; i<5 ;i++){
        cout<<"Book "<<i+1<<endl;
        B[i].displayData();
    }
    return 0;
}