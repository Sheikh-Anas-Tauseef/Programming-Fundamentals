#include <iostream>
#include <cmath>
using namespace std;

double sin_approx(double x) {
    double sum = 0, term = x, fact = 1;
    int n = 0;
    while (fabs(term) >= 0.0001) {
        sum += term;
        n++;
        fact *= (2 * n) * (2 * n + 1); // Compute (2n+1)! iteratively
        term = -term * x * x / ((2 * n) * (2 * n + 1)); // Next term: (-1)^n * x^(2n+1) / (2n+1)!
    }
    return sum;
}

int main() {
    double x;
    cin >> x;
    cout << sin_approx(x) << endl;
    return 0;
}