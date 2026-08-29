#include <iostream>
using namespace std;

int main() {
    int n, target;
    cin >> n >> target;

    int arr[100];

    for (int i = 0; i < n; i++) 
        cin >> arr[i];
    
        int i = 0, j = n - 1;
    while (i < j) { 
        int sum = arr[i] + arr[j];
        if (sum == target) {
            cout << "Found";
            return 0;
        } else if (sum < target) 
            i++;
         else 
         j--;
}
cout << "Not Found";
}