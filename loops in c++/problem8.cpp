#include<iostream>
using namespace std;
int main(){
    int student, marks, pass = 0, fail = 0;
    cout << "Enter the number of students in your class: ";
    cin >> student;
    for (int i = 1; i <= student; i++){
        cout << "Enter the marks of student " << i << ": ";
        cin >> marks;
        if (marks >= 50){
            pass++;
            
        }
        else {
            fail++;
        }
    }
    cout << "Total passed    : " << pass << endl;
    cout << "Total failed    : " << fail << endl;
    cout << "Pass percentage : " << (pass * 100) / student << "%" << endl;
    return 0;
}