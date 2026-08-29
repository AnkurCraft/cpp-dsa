#include <iostream>
#include <vector>
using namespace std;

vector<long long> prefixSum(const vector<int>& a) {
    vector<long long> p(a.size() + 1);
    for (size_t i = 0; i < a.size(); ++i) p[i + 1] = p[i] + a[i];
    return p;
}

long long rangeSum(const vector<long long>& p, int l, int r) {
    return p[r + 1] - p[l];
}

int main() {
    vector<int> a{2, 4, 1, 7, 3};
    auto p = prefixSum(a);
    cout << rangeSum(p, 1, 3) << '\n';
}
