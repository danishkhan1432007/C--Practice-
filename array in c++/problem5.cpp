#include <iostream>
using namespace std;
int main()
{
    int highest = 0, secondhighest = 0;
    int IDs[] = {101, 102, 103, 104, 105, 106, 107, 108};
    int Sales[8];
    for (int i = 0; i < 8; i++)
    {
        cout<<"Employee "<<IDs[i]<<" sales: ";
        cin>>Sales[i];
    }

    highest = Sales[0];
    int emp1 = IDs[0], emp2 = 0;
    
    for(int i = 0; i < 8; i++)
    {
        
    if (highest < Sales[i])
    {
        secondhighest = highest;
        emp2 = emp1;
        highest = Sales[i];
        emp1 = IDs[i];
    }
    else if (secondhighest < Sales[i])
    {
        secondhighest = Sales[i]; 
        emp2 = IDs[i];
    }
   
}
if (highest == secondhighest)
{
    cout<<"1st place: Employee "<<emp1<<" Rs: "<<highest<<endl;
    cout<<"2nd place: Employee "<<emp2<<" Rs: "<<secondhighest<<endl;
    cout<<"Both have same Sales so both should get the bouns"<<endl;
}
else 
{
    cout<<"1st place: Employee "<<emp1<<" Rs: "<<highest<<endl;
    cout<<"2nd place: Employee "<<emp2<<" Rs: "<<secondhighest<<endl;
} 
}