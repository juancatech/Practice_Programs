#include <iostream>
#include <string.h>
using namespace std;

/* Write a program that calculates the average rainfall for three months. The program
 * should ask the user to enter the name of each month, such as June or July, and the
 * amount of rain (in inches) that fell each month. The program should display a message
 * similar to the following:
 * The average rainfall for June, July, and August is 6.72 inches.
 */


int main()
{
    string month1, month2, month3;
    float rain_month1, rain_month2, rain_month3, avg_rain;

    cout << "Enter the name of three months (with a space in between the names): ";
    cin >> month1 >> month2 >> month3;

    cout << "Enter the amount of rain for the respective months (with a space in between the numbers): ";
    cin >> rain_month1 >> rain_month2 >> rain_month3;

    avg_rain = ((rain_month1 + rain_month2 + rain_month3) / 3);

    cout << "The average rainfall for " << month1 <<  ", " <<  month2 <<  ", and " << month3 << " is: " <<  avg_rain << " inches." << endl;

    return 0;
}
