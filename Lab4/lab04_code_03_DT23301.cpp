#include<iostream>
using namespace std;

int main(){

double operand1, operand2, result;
char operation;
cout<<"\t**Calculator Program";
cout<<"\nEnter the desired expression" << "with spaces<eg 12.6 + 4.32>";
cin>>operand1>>operation>>operand2;
if(operation=='+'){
    result=operand1+operand2;
}if(operation== '-'){
    result=operand1-operand2;
}if (operation=='*'){
    result=operand1*operand2;
}if(operation=='/'){
    result=operand1/operand2;
}if (operation!='+'|| operation!='-' || operation!='*'|| operation!='/'){
    cout<<"\nInvalid Operator";
}
cout<<"\n\nresult="<<result;
return 0;
}