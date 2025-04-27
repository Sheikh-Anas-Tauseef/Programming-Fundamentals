#include <iostream>
#include <cmath>
using namespace std;

double f(double x, double a, double b, double c, double d) { return a*x*x*x + b*x*x + c*x + d; }
double f_prime(double x, double a, double b, double c) { return 3*a*x*x + 2*b*x + c; }
double f_double_prime(double x, double a, double b) { return 6*a*x + 2*b; }

double halley_method(double a, double b, double c, double d, double x0, double p=0.0001, int m=1000) {
    double x=x0;
    for (int i=0; i<m; i++) {
        double fx=f(x,a,b,c,d), fpx=f_prime(x,a,b,c), fppx=f_double_prime(x,a,b);
        double d=2*fpx*fpx-fx*fppx;
        if (fabs(d)<1e-10) return NAN;
        double xn=x-(2*fx*fpx)/d;
        if (fabs(xn-x)<p) return xn;
        x=xn;
    }
    return NAN;
}

int find_roots(double a, double b, double c, double d, double r[3]) {
    double g[3]={-100,0,100};
    int n=0;
    for (int i=0; i<3; i++) {
        double root=halley_method(a,b,c,d,g[i]);
        if (!isnan(root)) {
            bool d=true;
            for (int j=0; j<n; j++) if (fabs(root-r[j])<0.001) {d=false; break;}
            if (d && n<3) r[n++]=root;
        }
    }
    for (int i=0; i<n-1; i++) for (int j=0; j<n-i-1; j++) if (r[j]>r[j+1]) swap(r[j], r[j+1]);
    return n;
}

int main() {
    double a,b,c,d,r[3];
    cout<<"Enter coefficient a: "; cin>>a;
    cout<<"Enter coefficient b: "; cin>>b;
    cout<<"Enter coefficient c: "; cin>>c;
    cout<<"Enter coefficient d: "; cin>>d;
    int n=find_roots(a,b,c,d,r);
    if (n) for (int i=0; i<n; i++) cout<<"Root "<<i+1<<": "<<r[i]<<endl;
    else cout<<"No roots found within the given precision."<<endl;
    return 0;
}