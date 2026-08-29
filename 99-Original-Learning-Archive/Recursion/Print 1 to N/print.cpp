#include <iostream>
using namespace std;

void print(int n) {
    if (n == 0)
        return;  // Base case

    print(n - 1);  // Recursive call

    cout << n << " ";
}

int main() {
    print(5);

    return 0;
}