#include<iostream>
using namespace std;

int main(){
    int num1, num2;
    cout<<"Enter first number: "; cin>>num1;
    cout<<"Enter second number: "; cin>>num2;
    while (num1 != num2){
        if (num1>num2) num1 = num1 - num2;
        else num2 = num2 - num1;
    }
    cout << "GCD is: "<<num1;
    return 0;
}