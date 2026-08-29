#include <iostream>
using namespace std;
enum Day { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };
int main() {
    Day today;
    today = Wednesday;
    cout << "Day value (integer): " << today << endl;

    return 0;
}