#include <iostream>
#include <vector>
using namespace std;

void moveZeros(vector<int>& a) {
    int write = 0;
    for (int x : a) if (x != 0) a[write++] = x;
    while (write < static_cast<int>(a.size())) a[write++] = 0;
}

int main() {
    vector<int> a{0,1,0,3,12};
    moveZeros(a);
    for (int x : a) cout << x << ' ';
}
