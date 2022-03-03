#include <iostream>

using namespace std;

/*
 * Write a program that will convert U.S. dollar amounts to Japanese yen and to euros,
 * storing the conversion factors in the constants YEN_PER_DOLLAR and EUROS_PER_
 * DOLLAR . To get the most up-to-date exchange rates, search the Internet using the
 * term “currency exchange rate”. If you cannot find the most recent exchange rates, use
 * the following:
 * 1 Dollar = 98.93 Yen
 * 1 Dollar = 0.74 Euros
 * Format your currency amounts in fixed-point notation, with two decimal places of
 * precision, and be sure the decimal point is always displayed.
 */

int main()
{
    const float YEN_PER_DOLLAR = 115.57, EUROS_PER_DOLLAR = .89;
    float money, convert_Yen, convert_Eur;

    cout << "\t\tCURRENCY CONVERSION" << endl;
    cout << "Enter how much, in US Dollars, you want to convert: $";
    cin >> money;

    convert_Yen = money * YEN_PER_DOLLAR;
    convert_Eur = money *EUROS_PER_DOLLAR;


    cout << "The exchange rate for Yen is: " << convert_Yen << endl;
    cout << "The exchange rate for Euro is: " << convert_Eur << endl;

    return 0;
}
