#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int arr[100];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // 1. Fixed Window: Maximum sum of size k
    int sum = 0;

    for (int i = 0; i < k; i++)
        sum += arr[i];

    int maxSum = sum;

    for (int i = k; i < n; i++) {
        sum = sum + arr[i] - arr[i - k];
        maxSum = max(maxSum, sum);
    }

    cout << "Max sum of size " << k << ": " << maxSum << endl;


    // 2. Variable Window: Shortest subarray with sum >= k
    int left = 0;
    int windowSum = 0;
    int minLen = n + 1;

    for (int right = 0; right < n; right++) {
        windowSum += arr[right];

        while (windowSum >= k) {
            minLen = min(minLen, right - left + 1);
            windowSum -= arr[left];
            left++;
        }
    }

    cout << "Shortest subarray with sum >= " << k << ": "
         << (minLen == n + 1 ? 0 : minLen) << endl;

    return 0;
}