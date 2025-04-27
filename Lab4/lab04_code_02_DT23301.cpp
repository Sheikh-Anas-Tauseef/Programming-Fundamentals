#include<iostream>
using namespace std;

int main(){

bool a =true, b=0, c=0, result;
result=(c||a);
cout<<"a AND b="<<(a&&b);
cout<<"\nc OR a="<<result;
cout<<"\nNOTa="<<(!a);
cout<<"\nNOTb="<<(!b);
cout<<"\nNOTc="<<(!c);
return 0;
}