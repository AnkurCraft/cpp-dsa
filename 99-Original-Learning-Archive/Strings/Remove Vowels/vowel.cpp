#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    string result = "";

    for (char c : s) {
        if (c != 'a' && c != 'e' && c != 'i' &&
            c != 'o' && c != 'u') {
            result += c;
        }
    }

    cout << result;
}