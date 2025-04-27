#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double a,b,c,descriminent,x1,x2;
    cout << "Enter a : " << endl;    cin >> a;
    cout << "Enter b : " << endl;    cin >> b;
    cout << "Enter c : " << endl;    cin >> c;
    descriminent = b*b - 4*a*c;    
    cout << "Descriminent : " << descriminent << endl;
    x1=(-b+sqrt(descriminent))/(2*a);
    x1=(-b-sqrt(descriminent))/(2*a);
    cout << "Root 1 : " << x1 << endl;
    cout << "Root 2 : " << x2 << endl;
    return 0; 
}