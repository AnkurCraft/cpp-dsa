#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of rows: ";
    cin >> n;

    // Upper pyramid
    for(int i = 1; i <= n; i++) {
        // spaces
        for(int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // stars
        for(int j = 1; j <= (2*i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower inverted pyramid
    for(int i = n - 1; i >= 1; i--) {
        // spaces
        for(int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // stars
        for(int j = 1; j <= (2*i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}