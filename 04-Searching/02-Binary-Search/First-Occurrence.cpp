#include <iostream>
#include <vector>
using namespace std;

int firstOccurrence(const vector<int>& a, int target) {
    int l = 0, r = static_cast<int>(a.size()) - 1, ans = -1;
    while (l <= r) {
        int m = l + (r-l)/2;
        if (a[m] >= target) {
            if (a[m] == target) ans = m;
            r = m-1;
        } else l = m+1;
    }
    return ans;
}

int main() { cout << firstOccurrence({1,2,2,2,4},2) << '\n'; }
