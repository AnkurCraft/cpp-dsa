#include <iostream>
#include <vector>
#include <utility>
using namespace std;

void sort012(vector<int>& a) {
    int low = 0, mid = 0, high = static_cast<int>(a.size()) - 1;
    while (mid <= high) {
        if (a[mid] == 0) swap(a[low++], a[mid++]);
        else if (a[mid] == 1) ++mid;
        else swap(a[mid], a[high--]);
    }
}

int main() {
    vector<int> a{2,0,2,1,1,0};
    sort012(a);
    for (int x : a) cout << x << ' ';
}
