#include<iostream>
using namespace std;

int main() {
    char guess;

    cout << "Press any key from keyboard: ";
    cout << "\nThis program shall end only when you press the secret key (x).";
    
    cin >> guess; // use standard input

    while (guess != 'x') {
        cout << "\nWrong input, try another key: ";
        cin >> guess; // again use standard input
    }

    cout << "\nEureka! You have discovered it.";
    return 0;
}
