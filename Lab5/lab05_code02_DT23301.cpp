#include<iostream>
using namespace std;

int main(){

int base, exponent, answer, counter;
cout<<"Enter a number(integer):"; cin>>base;
cout<<"Enter an exponent(integer):"; cin>>exponent;
answer=1;//running product variable
for(counter=exponent; counter>0; counter=counter-1){
    answer = answer*base;
}
cout<<"\n"<<base<<" raised to power "<<exponent <<" = "<<answer;
return 0;      
}