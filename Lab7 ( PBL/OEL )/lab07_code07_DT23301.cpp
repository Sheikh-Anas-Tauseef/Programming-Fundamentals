#include<iostream>
#include<cmath>
using namespace std;

int main(){

double a,b,c,x, N; cout<<"Enter a number +ve number: "; cin>>N;
a = 1.0; x = 1.0; b = N; 
while (fabs ((x*x) - N )>0.0001){
    c=0.5 * (a + b) ;
    x = c;
    if (x*x - N < 0 ) a = c;
    else b = c;
}
cout<<endl<<"Root is: "<<x;
return 0;
}