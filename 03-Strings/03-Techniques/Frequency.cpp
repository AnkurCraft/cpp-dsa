#include <iostream>
#include <array>
#include <string>
using namespace std;

array<int,26> frequency(const string& s) {
    array<int,26> f{};
    for (char c : s) if (c >= 'a' && c <= 'z') ++f[c-'a'];
    return f;
}

int main() {
    auto f = frequency("banana");
    cout << f['a'-'a'] << '\n';
}
