// Calculate the square root of n just once rather than repeatedly.
// Declare anouther variable and set it to ther square root of n.
// The type should be double. Then use this variable in the while condition.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n = 0;  //number to test for primeness
    int i = 2;  // loop counter
    bool is_prime = true;   // Boolean flag - assume true for now

    // Get a number from the keyboard
    cout << "Enter a number and press ENTER: ";
    cin >> n;

    // Calculate square root and store it in sr
    double sr = sqrt(n);

    // Test for prime by checking for divisibility
    // By all whole numbers from 2 to sr
    while (i <= sr) {
        if (n % i == 0) {       //If i divides n,
            is_prime = false;   // n is not prime
        }
        ++i;    // Add 1 to i
    }

    // Print results
    if (is_prime) {
        cout << "Number is prime" << endl;
    } else {
        cout << "Number is not prime." << endl;
    }

    return 0;
}
