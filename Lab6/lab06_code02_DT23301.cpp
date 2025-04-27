#include<iostream>
#include<iomanip>
#include<conio.h> // Only works in Windows/MingW compilers

using namespace std;

int main() {
    char option = 'y';double num;int counter; cout << "\t\t* Multiplication Tables *";
    while (option != 'n') {
        cout << "\n\nEnter a number: ";
        cin >> num;
        for (counter = 1; counter <= 15; counter++) {
            cout << left;
            cout << setw(10) << num << "*" << right
                 << setw(10) << counter << "="
                 << setw(10) << num * counter << endl;
        }
        cout << "\n\nDo you like to continue? (y or n): ";
        option = getche(); // Corrected assignment
    }
    if (option == 'n') {
        cout << "\nThanks for using this program";
    }
    getch(); // Only at the end of main
    return 0;
}
