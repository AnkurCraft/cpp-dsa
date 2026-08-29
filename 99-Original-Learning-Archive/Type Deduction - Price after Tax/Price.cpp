#include <iostream>
using namespace std;
int main() 
{
    auto price = 199;
    auto tax = 0.18;
    auto total = price + price * tax;
    cout << total;
}