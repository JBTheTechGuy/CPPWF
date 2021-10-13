#include <iostream>
using namespace std;

int main()
{
    double ftemp;   //Fahrenheit temp

    // Prompt for fahrenheit temperature and store it
    cout << "Input a Fahrenheit temperature and press ENTER: ";
    cin >> ftemp;

    // Convert ftemp to Celsius and output results
    cout << "Celsius temperature is: " << (ftemp - 32) / 1.8;
    cout << endl;

    return 0;
}
