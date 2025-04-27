#include<iostream>
using namespace std;

int main(){

int first_num, second_num, gcd;
cout<<"Enter first number: "; cin>>first_num;
cout<<"Enter second number: "; cin>>second_num;
for(int i=1;i<=first_num&&i<=second_num; i++){
    if(first_num%i==0 && second_num%i==0) gcd = i;
cout<<"Greatest Common Divisor (GCD): "<<gcd<<endl;
}
return 0;
}