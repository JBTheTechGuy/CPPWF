#include <iostream>
using namespace std;

int main()
{
    int i = 1, n = 0;

    // Get number from keyboard
    cout << "Enter a number and press ENTER: ";
    cin >> n;

    while (i <= n) {    // While i is less than or equal to n
        cout << i << " ";   // Print i
        i = i + 1;          // Add 1 to i
    }
    return 0;
}
