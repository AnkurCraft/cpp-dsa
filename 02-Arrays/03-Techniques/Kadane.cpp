#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long maxSubarraySum(const vector<int>& a) {
    long long best = a[0], current = a[0];
    for (size_t i = 1; i < a.size(); ++i) {
        current = max<long long>(a[i], current + a[i]);
        best = max(best, current);
    }
    return best;
}

int main() {
    cout << maxSubarraySum({-2,1,-3,4,-1,2,1,-5,4}) << '\n';
}
