#include<iostream>
using namespace std;

int main(){
    double a,b,c; char choice;
    cout << "Welcome to my Calculator!" << endl;
    cout << "Enter Number 1 : " << endl;    cin >> a;
    cout << "Enter Number 2 : " << endl;    cin >> b;
    cout << "Enter Operation you wants to perform...." << endl;    cout << "For Addition Enter + ... " << endl;
    cout << "For Subtruction Enter - ... " << endl;    cout << "For Multiplication Enter * ... " << endl;
    cout << "For Division Enter / ... " << endl;    cin >> choice;
    switch(choice){
        case '+': cout << "Result : " << a+b <<endl; break;
        case '-': cout << "Result : " << a-b <<endl; break;
        case '*': cout << "Result : " << a*b <<endl; break;
        case '/': cout << "Result : " << a/b <<endl; break;
        default: cout << "Invalid Operation!.... " <<endl; break;
    }
    return 0; 
}
