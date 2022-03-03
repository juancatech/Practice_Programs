#include <iostream>
#include <string>
using namespace std;

/*
 * A retail company must file a monthly sales tax report listing the sales for the month and
 * the amount of sales tax collected. Write a program that asks for the month, the year,
 * and the total amount collected at the cash register (that is, sales plus sales tax). Assume
 * the state sales tax is 4 percent and the county sales tax is 2 percent.
 * If the total amount collected is known and the total sales tax is 6 percent, the amount
 * of product sales may be calculated as:
 *
 * S = T / 1.06
 *
 * S is the product sales and T is the total income (product sales plus sales tax).
 * The program should display a report similar to
 * Month: October
 * --------------------
 * Total Collected: $ 26572.89
 * Sales: $ 25068.76
 * County Sales Tax: $ 501.38
 * State Sales Tax: $ 1002.75
 * Total Sales Tax: $ 1504.13
 */

int main()
{
    const float state_tax = 0.04, county_tax = 0.02;
    string month;
    int year;
    float amt_collected, product_sales, sales_state_tax, sales_county_tax, total_tax;

    cout << "Enter the month:";
    cin >> month;
    cout << "Enter the year:";
    cin >> year;
    cout << "What is the total amount collected: $";
    cin > amt_collected;

    sales_county_tax = amt_collected * county_tax;
    sales state_tax = amt_collected * state_tax;

    total_tax = sales_county_tax + sales_state_tax;


    return 0;
}
