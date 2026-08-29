#include <iostream>
using namespace std;

int dp[100];

int fib(int n) {
    if (n <= 1)
        return n;

    if (dp[n] != -1)
        return dp[n];

    return dp[n] = fib(n - 1) + fib(n - 2);
}

int main() {
    for (int i = 0; i < 100; i++)
        dp[i] = -1;

    cout << fib(5);

    return 0;
}