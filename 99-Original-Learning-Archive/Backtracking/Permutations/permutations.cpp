#include <iostream>
#include <vector>
using namespace std;

void permute(vector<int>& arr, int index) {
    // Base case
    if (index == arr.size()) {
        for (int x : arr) {
            cout << x << " ";
        }
        cout << endl;
        return;
    }

    // Try every element at current position
    for (int i = index; i < arr.size(); i++) {
        swap(arr[index], arr[i]);

        permute(arr, index + 1);

        swap(arr[index], arr[i]); // Backtrack
    }
}

int main() {
    vector<int> arr = {1, 2, 3};

    permute(arr, 0);

    return 0;
}