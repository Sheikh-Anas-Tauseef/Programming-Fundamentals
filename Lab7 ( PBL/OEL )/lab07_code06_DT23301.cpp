#include<iostream>
#include<cmath>
using namespace std;

int main(){

double N, root, counter=0;
cout<<"Enter a +ve number to calculate its square root: "; cin>>N;
root = N/2.0;
while (fabs(((root*root)-N))>0.0001){
    root = root - (((root*root)-N)/(2.0*root));
    counter++;
}
cout<<"Square root of "<<N<<" is: "<<root;
return 0;
}