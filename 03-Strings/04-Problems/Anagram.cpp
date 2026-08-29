#include <iostream>
#include <array>
#include <string>
using namespace std;

bool isAnagram(string a, string b) {
    if (a.size() != b.size()) return false;
    array<int,256> f{};
    for (unsigned char c : a) ++f[c];
    for (unsigned char c : b) if (--f[c] < 0) return false;
    return true;
}

int main() {
    cout << boolalpha << isAnagram("listen","silent") << '\n';
}
