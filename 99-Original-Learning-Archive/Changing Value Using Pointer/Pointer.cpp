#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int* p = &a;

    *p = 50;  // changing value using pointer

    cout << "New value of a: " << a << endl;

    return 0;
}