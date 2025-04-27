#include<iostream>
using namespace std;

int main(){
int num1=105, num2=34;
float pi=3.1412, x=123.5;
string password="abcd1234";
bool result=(num1>num2);
cout<<num1<<">"<<num2<<"\t1=true, 0=false";
cout<<"\nanswer="<<result<<endl;
cout<<pi<<"="<<x<<"\t1=true, 0=false";
cout<<"\nanswer="<<(pi-x)<<endl;
cout<<"Is the password correct?\t1=yes, 0-no";
cout<<"\nanswer="<<(password="abcd1234");
return 0;
}