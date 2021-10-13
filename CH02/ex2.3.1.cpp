// Write a program to test a number for being in the range 0 to 100 inclusive.

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter a number and press ENTER: ";
    cin >> n;

    if (n >= 0 && n <= 100) {
        cout << "Number is between 0 and 100." << endl;
    } else {
        cout << "Number is not between 0 and 100." << endl;
    }

    return 0;
}
