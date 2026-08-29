#include <iostream>
#include <vector>
using namespace std;

int majorityElement(const vector<int>& a) {
    int candidate = 0, votes = 0;
    for (int x : a) {
        if (votes == 0) candidate = x;
        votes += (x == candidate ? 1 : -1);
    }
    return candidate;
}

int main() {
    cout << majorityElement({2,2,1,1,1,2,2}) << '\n';
}
