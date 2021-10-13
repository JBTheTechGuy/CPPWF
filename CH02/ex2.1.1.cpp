// Instructions: Write a program that reports whether a number input is divisible by 7

#include <iostream>
using namespace std;

int main()
{
    int n;  // Number from keyboard

    // Get a number from keyboard
    cout << "Enter a number and press ENTER: ";
    cin >> n;

    // Get remainder after dividing by 7
    // If remainder is 0 then n is divisible by 7
    if (n % 7 == 0) {
        cout << "The number is divisible by 7.";
    } else {
        cout << "The number is not divisible by 7.";
    }
    
    return 0;
}
