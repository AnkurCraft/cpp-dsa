#include <iostream>
using namespace std;
int main() 
{
    int CorrectPIN = 1234;
    int input;
    int attempts = 0;
    while (attempts < 3) 
    {
        cout << "Enter PIN: ";
        cin >> input;
        if (input == CorrectPIN) 
        {
            cout << "Access Granted\n";
            break;
        }
        else 
        {
            cout << "Wrong PIN\n";
        }
        attempts++;
        if (attempts == 3) 
        {
            cout << "Account Locked\n";
        }
    }
}