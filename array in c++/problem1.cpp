#include <iostream>
using namespace std;
int main()
{
    int expense[7];
    int total = 0;
    cout<<"plz enter your weekly expense from manday to sunday\n";
    for (int i = 0; i < 7; i++)
    {
        cout<<"Day "<<i + 1<<" :";
        cin>>expense[i];
        total += expense[i];
    }
    cout<<"Total: "<<total<<endl;
    cout<<"Average: "<<(float)total/7<<endl;

    int highest = expense[0];
    int lowest = expense[0];
    for (int i = 0; i < 7; i++)
    {
        if (expense[i] > highest)
        {
            highest = expense[i];
        }
         if (expense[i] < lowest)
        {
            lowest = expense[i];
        }
    }
    
    cout<<"Highest: "<<highest<<endl;
    cout<<"Lowest: "<<lowest<<endl;
}