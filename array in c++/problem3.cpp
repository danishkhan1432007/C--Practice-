#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n = 0;
    cout<<"How many products you have in stock. ";
    cin>>n;
    int productID[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the productID "<<i + 1<<" Quantity.";
        cin>>productID[i];
        
        if(productID[i] < 5)
        {
            cout<<"Low stock reorder needed\n";
        }
    } 
return 0;
}