#include <iostream>
using namespace std;

int main() {
    int n, reverse = 0;

    cout << "Enter a number: ";
    cin >> n;

    while(n != 0) {
        int digit = n % 10;        // get last digit
        reverse = reverse * 10 + digit; // build reversed number
        n = n / 10;               // remove last digit
    }

    cout << "Reversed number = " << reverse;

    return 0;
}