#include <iostream>

using namespace std;
/*
 * Write a program that converts Celsius temperatures to Fahrenheit temperatures. The
 * F is the Fahrenheit temperature, and C is the Celsius temperature.
 */

int main()
{
    float farenheit, celsius;

    cout << "Please enter the Celsius temperature: ";
    cin >> celsius;

    farenheit = ( celsius * 9/5) + 32;

    cout << "\nThe temperature in Farenheit is: " << farenheit << endl;


    return 0;
}
