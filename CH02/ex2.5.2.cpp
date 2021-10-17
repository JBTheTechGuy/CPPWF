// Revise the program so that it only accepts an initial total greater than 0

#include <iostream>
using namespace std;

int main()
{
    int total = 0, n = 0, max = 0;

    while (total < 1)
    {
        cout << "Welcome to NIM. Pick a starting total: ";
        cin >> total;
    }
        cout << "Pick a maximum number to subtract: (between 1-10) ";
        cin >> max;

    while (true) {

        // Pick best response and print results
        
        if ((total % max) == 2) {
            total = total - 2;
            cout << "I am subtracting 2." << endl;
        } else {
            total--;
            cout << "I am subtracting 1." << endl;
        }

        cout << "New total is " << total << endl;
        if (total <= 0) {
            cout << "I win!" << endl;
            break;
        }

        // Get user's response: must be between 1 and max
        
        cout << "Enter num to subtract: ";
        cin >> n;
        while (n < 1 || n > max) {
            cout << "Input must be between 1 or max." << endl;
            cout << "Re-enter: ";
            cin >> n;
        }
        total = total - n;
        
        cout << "New total is " << total << endl;
        if (total <= 0) {
            cout << "You win!" << endl;
            break;
        }
    }

    return 0;
}
