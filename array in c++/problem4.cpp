#include <iostream>
#include <string>

using namespace std;
char calculate_Grade(int size,int marks[])
{
    int total = 0;
    float percentage;
    cout<<"Enter the marks of 5 subjects \n";
    for (int i = 0; i < size; i++)
    {
        cin>>marks[i];
        total = marks[i] + total;
    }
    
        percentage = (float)total/500*100;
        cout<<"Your percertage is "<<percentage<<"%\n";
        if (percentage >= 90)
        {
            return 'A' ;
        }
        else if (percentage >= 75)
        {
            return  'B';
        }
        else if (percentage >= 60)
        {
            return 'C';
        }
        else
        {
            return 'F';
        }

    }


int main()
{
    int n = 5;
    int marks[n];
    char result = calculate_Grade(n,marks);
    cout<<result<<endl;
return 0;
}