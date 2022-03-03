#include <iostream>
using namespace std;

/* Write a program that calculates a car’s gas mileage. The program should ask the user
 * to enter the number of gallons of gas the car can hold and the number of miles it can
 * be driven on a full tank. It should then display the number of miles that may be driven
 * per gallon of gas.
 */

int main()
{
    double gallons_on_car, miles_driven, mpg;

    cout << "Enter the number of gallon of gas the car can hold: ";
    cin >> gallons_on_car;
    cout << "Enter the number of miles the car can be driven on a full tank: ";
    cin >> miles_driven;

    mpg = miles_driven / gallons_on_car;

    cout << "\nThe MPG is: " << mpg << endl;
    return 0;
}
