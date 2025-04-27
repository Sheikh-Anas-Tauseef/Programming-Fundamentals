#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double base,perpendicular,hypotneuse,angle,angleDegrees;
    cout << "Enter Base : " << endl;
    cin >> base;
    cout << "Enter Perpendicular : " << endl;
    cin >> perpendicular;
    hypotneuse = sqrt(base*base + perpendicular*perpendicular);
    angle = atan(perpendicular/base);
    angleDegrees = angle * 180/3.14159;
    cout << "Hypotneus : " << hypotneuse << endl;
    cout << "Angle between base and hyp : " << angleDegrees << "  Degrees" << endl;
    cout << "Sin Of angle : " << sin(angle) << endl; 
    cout << "Cosine Of angle : " << cos(angle) << endl;
    return 0; 
}