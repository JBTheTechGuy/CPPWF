// Instructions: Print only even numbers up to the inputed number.

#include <iostream>
using namespace std;

int main()
{
    int i = 0, n = 0;

    // Get number from the keyboard and initialize i
    cout << "Enter a number and press ENTER: ";
    cin >> n;

    while(i <= n) {     //While i less than or equal to n
        cout << i << " ";   // Print i
        i = i + 2;          // Add 2 to i
    }

    return 0;
}
