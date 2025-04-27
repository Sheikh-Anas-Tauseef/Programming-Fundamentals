#include<iostream>
using namespace std;

int main(){
    double a,b,c;
    cout << "Enter Number 1 : " << endl;    cin >> a;
    cout << "Enter Number 2 : " << endl;    cin >> b;
    cout << "Enter Number 3 : " << endl;    cin >> c;
    if(a>b && a>c) cout << a << " is Greatest Number You Entered." << endl;
    else if(b>a && b>c) cout << b << " is Greatest Number You Entered." << endl;
    else cout << c << " is Greatest Number You Entered." << endl;
    if(a<b && a<c) cout << a << " is Smallest Number You Entered." << endl;
    else if(b<a && b<c) cout << b << " is Smallest Number You Entered." << endl;
    else cout << c << " is Smallest Number You Entered." << endl;
    return 0; 
}