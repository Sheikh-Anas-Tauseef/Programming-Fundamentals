#include<iostream>
using namespace std;

int main(){

int num1, num2,r,a,b;
cout<<"Enter first number: "; cin>>num1;
cout<<"Enter second number: "; cin>>num2;
if (num1>num2){
    a = num1; b = num2;
}else{
    a = num2; b = num1;
}
while (b!= 0){
    r = a%b ; a = b;b = r;
}
cout<<"GCD is: "<<a;
return 0;
}