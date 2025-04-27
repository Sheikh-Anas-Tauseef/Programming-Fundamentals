#include<iostream>
using namespace std;

int main(){

int number1;
int number2;
int result;
cout<<"Please enter number1 & number2";
cin>>number1>>number2;
result = number1 + number2; // addition
result = number1 - number2; // subtraction
result = number1 * number2; // multiplication
result = number1 / number2; // division
result = number1 % number2; // remainder division
cout<<result;
return 0;
}