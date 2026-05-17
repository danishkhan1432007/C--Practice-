#include <iostream>
using namespace std;
double CalculateBMI(double height , double weight){

    return weight / (height * height);
    
}
int main(){
    double h, w,result;
    cout<<"For calculating BMI sir fill the below form! \n";
    cout<<"Enter your weight(kg) : ";
    cin>>w;
    cout<<"Enter your height(m) : ";
    cin>>h;
   result =  CalculateBMI(h,w);
    cout<<"Your BMI is : ";
    cout<<result<<endl;
    if (result < 18.5){
        cout<<"Sir you are underweight foucs on weight gain .\n";
    }
    else if (result < 24.9){
        cout<<"Sir you are normal continue the routine excersice and food you eat normally .\n";
    }
    else if (result < 29.9){
        cout<<"Sir you are overweight please do more excersices as you can to reduce the weight .\n";
    }
    else {
        cout<<"Sir you are obese please do more excersices as much you can as well as do deiting .\n";
    }

    return 0;
}