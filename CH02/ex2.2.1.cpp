// Instructions: Write a program to print all numbers from n1 to n2.
// Where n1 and n2 are two numbers specified by the user.

#include <iostream>
using namespace std;

int main()
{
    int i, n1, n2;

    // Get numbers from keyboard and initialize i.
    cout << "Enter your first number and press ENTER: ";
    cin >> n1;

    cout << "Enter your second number and press ENTER: ";
    cin >> n2;

    i = n1;

    while (i <= n2) {   // While i is less than n2
        cout << i << " ";   // Print i
        i = i + 1;          // Add 1 to i
    }

    return 0;
}
