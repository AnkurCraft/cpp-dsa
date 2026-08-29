#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int>& arr, vector<int>& output, int index) {
    if (index >= arr.size()) {
        for (int x : output)
            cout << x << " ";
        cout << endl;
        return;
    }

    // Exclude
    solve(arr, output, index + 1);

    // Include
    output.push_back(arr[index]);
    solve(arr, output, index + 1);

    // Backtrack
    output.pop_back();
}

int main() {
    vector<int> arr = {1, 2};
    vector<int> output;

    solve(arr, output, 0);
}