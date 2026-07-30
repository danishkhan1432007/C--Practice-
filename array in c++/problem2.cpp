#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int present = 0, absent = 0;
    float percentage ;
    bool attendance [30];
    cout<<"Attendance of the class (1 for present and 0 for absent)\n";
    for (int i = 0; i < 30; i++)
    {
        cout<<"Enter the attendance of student"<<i + 1<<": ";
        cin>>attendance[i];
        if (attendance[i] == 1)
        {
            present++;
        }
        else
        {
            absent++;
        }
        
    }
    cout<<"Present students: "<<present<<endl;
    cout<<"Absent students: "<<absent<<endl;
    percentage = (float) present/30*100;
    cout<<"Attendance percentage: "<<percentage<<endl;

}