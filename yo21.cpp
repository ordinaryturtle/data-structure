#include <iostream>
using namespace std;
int main (){
int  weight_lb,height_in,bmi;
cout<< "enter weight in pounds:";
cin>> weight_lb;
cout <<"enter height in inches:";
cin>>height_in;
bmi=(703*weight_lb/height_in);
cout<< "your bmi id :"<<bmi<<endl;
if (bmi<18.5)
    cout<<"weight is underweight"<<endl;
    else if (bmi <25.0)
    cout<<"weight is normal"<<endl;
    else if (bmi<30.0)
    cout<<"weihgt is overweight"<<endl;
    else 
    cout <<"weight is obese"<<endl;
    return 0;
}

