#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

pair<int,int> twoSum(const vector<int>& a, int target) {
    unordered_map<int,int> seen;
    for (int i = 0; i < static_cast<int>(a.size()); ++i) {
        int need = target - a[i];
        if (seen.count(need)) return {seen[need], i};
        seen[a[i]] = i;
    }
    return {-1,-1};
}

int main() {
    auto [i,j] = twoSum({2,7,11,15}, 9);
    cout << i << ' ' << j << '\n';
}
