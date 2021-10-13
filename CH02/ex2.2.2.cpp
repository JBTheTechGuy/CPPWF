// Instructions: Write a program that prints all numbers from n to 1 in reverse order.

#include <iostream>
using namespace std;

int main()
{
    int i = 1, n = 0;

    // Get a number from the keyboard and initialize i
    cout << "Enter a number and press ENTER: ";
    cin >> n;

    while (n >= i) { // While n is greater than or equal to i
        cout << n << " ";   // Print n
        n = n - 1;          // Subtract 1 from n
    }

    return 0;
}
