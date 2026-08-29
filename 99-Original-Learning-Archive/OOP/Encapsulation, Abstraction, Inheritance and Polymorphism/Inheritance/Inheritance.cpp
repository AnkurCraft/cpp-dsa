#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cout << "Enter number of sold products: ";
    cin >> n;

    map<int, int> frequency;

    cout << "Enter product IDs: ";
    for (int i = 0; i < n; i++) {
        int productId;
        cin >> productId;

        frequency[productId]++;
    }

    cout << "\nSales frequency:\n";
    for (auto item : frequency) {
        cout << item.first << " sold " << item.second << " times" << endl;
    }

    return 0;
}