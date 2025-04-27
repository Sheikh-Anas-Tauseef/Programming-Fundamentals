#include<iostream>
#include<cmath>
using namespace std;

int main(){

double x,a,b,delta=0.0001,sum=0.0,fx1, fx2, deg_a,deg_b;
double pi = 3.14159265359;
int counter, counter_max;
cout<<"Enter x_min in degrees: "; cin>>deg_a;
cout<<"Enter x max in degrees: "; cin>>deg_b;
a = deg_a*pi/180.0;
b = deg_b*pi/180.0;
counter_max = ((b-a)/delta);
x = a;
for (counter=1; counter<=counter_max; counter++){
   fx1 = sin(x);
   fx2 = sin(x+delta);
   sum = sum + (fx1+fx2);
   x = x + delta;
}
sum = 0.5*sum*delta;
cout<<"integral = "<<sum;
return 0;
}