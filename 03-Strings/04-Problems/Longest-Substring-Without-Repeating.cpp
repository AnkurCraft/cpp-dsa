#include <iostream>
#include <string>
#include <array>
#include <algorithm>
using namespace std;

int longestUniqueSubstring(const string& s) {
    array<int,256> last;
    last.fill(-1);
    int left = 0, ans = 0;
    for (int right = 0; right < static_cast<int>(s.size()); ++right) {
        unsigned char c = s[right];
        left = max(left, last[c] + 1);
        ans = max(ans, right - left + 1);
        last[c] = right;
    }
    return ans;
}

int main() {
    cout << longestUniqueSubstring("abcabcbb") << '\n';
}
