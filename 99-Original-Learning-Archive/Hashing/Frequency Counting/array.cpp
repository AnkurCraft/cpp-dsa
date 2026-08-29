#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];
    int freq[1000] = {0};

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        freq[arr[i]]++;
    }
    for (int i = 0; i < 1000; i++) {
        if (freq[i] > 0) {
            cout << i << " -> " <<
            freq[i] << endl;
        }
    }
}