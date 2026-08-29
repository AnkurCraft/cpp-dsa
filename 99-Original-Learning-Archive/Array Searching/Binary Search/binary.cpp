#include <iostream>
using namespace std;
int main() {
    int n, x;
    cin >> n >> x;
    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int low = 0, high = n - 1;
    int index = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == x) {
            index = mid;
            break;
        }
        else if (arr[mid] < x) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    cout << index;
}