#include <iostream>
#include <iomanip>
using namespace std;

/* Write a program that asks for five test scores. The program should calculate the aver-
 * age test score and display it. The number displayed should be formatted in fixed-point
 * notation, with one decimal point of precision.
 */

int main()
{
    float test1, test2, test3, test4, test5, avg;

    cout << "Enter 5 test scores (with space in between them): ";
    cin >> test1 >> test2 >> test3 >> test4 >> test5;

    avg = ((test1 + test2 + test3 + test4 + test5)/ 5);

    cout << "The average test score is: " << setprecision(3) << avg << endl;
    //setprecision() needs to have the "iomanip" library and goes before the variable.

    return 0;
}
