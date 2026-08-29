#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool validPalindrome(const string& s) {
    int l = 0, r = static_cast<int>(s.size()) - 1;
    while (l < r) {
        while (l < r && !isalnum(static_cast<unsigned char>(s[l]))) ++l;
        while (l < r && !isalnum(static_cast<unsigned char>(s[r]))) --r;
        if (tolower(static_cast<unsigned char>(s[l])) !=
            tolower(static_cast<unsigned char>(s[r]))) return false;
        ++l; --r;
    }
    return true;
}

int main() {
    cout << boolalpha << validPalindrome("A man, a plan, a canal: Panama") << '\n';
}
