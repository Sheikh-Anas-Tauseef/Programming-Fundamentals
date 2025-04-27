#include<iostream>
using namespace std;

int main(){
float weight_in_kg,height_in_meter,bmi;
cout<<"\t \t *Body mass index (BMI) calculator* \n";
cout<<"\t Calculates an index that indicates"<< "healthy weight distribution\n";
cout<<"Enter your weight in Kgs: "; cin>> weight_in_kg;
cout <<"\nEnter your height in meters: "; cin>> height_in_meter;
bmi-weight_in_kg/(height_in_meter*height_in_meter);
cout<<"\nYour BMI value is:"<< bmi;
cout<<"\n\n \t\t Standard BMI Values for comparison \n";
cout<<"\n \t\t Less than 18.5 Underweight";
cout<<"\n \t\t Between 18.5 and 24.9: Normal";
cout<<"\n \t\t Between 25 and 29.9: Overweight";
cout<<"\n \t\t Greater than 30 Overweight";
return 0;
}