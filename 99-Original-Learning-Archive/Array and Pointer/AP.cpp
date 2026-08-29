#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3};
    int* p = arr;

    cout << *(p + 1);

    return 0;
}