#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotateRight(vector<int>& a, int k) {
    if (a.empty()) return;
    k %= static_cast<int>(a.size());
    reverse(a.begin(), a.end());
    reverse(a.begin(), a.begin() + k);
    reverse(a.begin() + k, a.end());
}

int main() {
    vector<int> a{1,2,3,4,5};
    rotateRight(a, 2);
    for (int x : a) cout << x << ' ';
}
