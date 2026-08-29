#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    int arr[] = {10, 5, 20, 1, 15};
    int n = 5;
    int k = 3;

    priority_queue<int> pq;

    for (int i = 0; i < n; i++)
        pq.push(arr[i]);

    for (int i = 0; i < k; i++) {
        cout << pq.top() << " ";
        pq.pop();
    }
}