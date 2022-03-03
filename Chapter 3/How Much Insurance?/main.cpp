#include <iostream>

using namespace std;
/*
 * Many financial experts advise that property owners should insure their homes or buildings
 * for at least 80 percent of the amount it would cost to replace the structure. Write a
 * program that asks the user to enter the replacement cost of a building and then displays
 * the minimum amount of insurance he or she should buy for the property.
 */

int main()
{

    const float insurance = .80;
    float cost, min_isnurance;

    cout << "Please enter the replacement cost: ";
    cin >> cost;

    min_isnurance = (cost * insurance);

    cout << "The minimum insurance is: $" << min_isnurance << endl;




    return 0;
}
