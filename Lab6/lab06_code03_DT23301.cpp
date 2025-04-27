#include<iostream>
#include<iomanip>
#include<conio.h> 
using namespace std;

int main() {
    char option;double num;int counter;
    cout << "\t\t* Multiplication Tables *";
    do {
        cout << "\n\nEnter a number: ";
        cin >> num;
        for (counter = 1; counter <= 10; counter++) {
            cout << setw(10) << num << " * " << right
                 << setw(10) << counter << " = "
                 << setw(10) << num * counter << endl;
        }
        cout << "\n\nDo you like to continue? (y or n): ";
        option = getche(); // Wait for keypress without pressing Enter
    } while (option != 'n');
    if (option == 'n') {
        cout << "\nThanks for using this program.";
    }
    getch(); // Pause screen at end
    return 0;
}
