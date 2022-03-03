#include <iostream>

using namespace std;

/* There are three seating categories at a stadium. For a softball game, Class A seats cost
 * $15, Class B seats cost $12, and Class C seats cost $9. Write a program that asks how
 * many tickets for each class of seats were sold, then displays the amount of income generated
 * from ticket sales. Format your dollar amount in fixed-point notation, with two
 * decimal places of precision, and be sure the decimal point is always displayed.
 */

int main()
{
    int classA = 15, classB = 12, classC = 9, sold_A, sold_B, sold_C, total_A, total_B, total_C;

    cout << "\t\tSoftball Game Income" << endl;
    cout << "\nPrices: Class A: " << classA << ", Class B: " << classB << ", Class C: " << classC << endl;
    cout << "\nHow many tickets were sold for Class A: ";
    cin >> sold_A;
    cout << "How many tickets were sold for Class B: ";
    cin >> sold_B;
    cout << "How many tickets were sold for Class C: ";
    cin >> sold_C;

    total_A = classA * sold_A;
    total_B = classB * sold_B;
    total_C = classC * sold_C;

    cout << "\nThe income generated for Class A is :$ " << total_A << endl;
    cout << "The income generated for Class B is :$ " << total_B << endl;
    cout << "The income generated for Class C is :$ " << total_C << endl;

    return 0;
}
