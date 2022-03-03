#include <iostream>

using namespace std;

/*
 * Write a program that asks the user to enter the monthly costs for the following
 * expenses incurred from operating his or her automobile: loan payment, insurance, gas,
 * oil, tires, and maintenance. The program should then display the total monthly cost of
 * these expenses, and the total annual cost of these expenses.
 */

int main()
{
    float loan_payment, insurance, gas, oil, tires, maintenance, monthly_cost, annual_cost;

    cout << "Please enter your monthly for the following: " << endl;
    cout << "1. Loan Payment: $";
    cin >> loan_payment;
    cout << "2. Insurance: $";
    cin >> insurance;
    cout << "3. Gas: $";
    cin >> gas;
    cout << "4. Oil: $";
    cin >> oil;
    cout << "5. Tires: $";
    cin >> tires;
    cout << "6. Maintenance: $";
    cin >> maintenance;

    monthly_cost = loan_payment + insurance + gas + oil + tires + maintenance;

    annual_cost = monthly_cost * 12;

    cout << "\nYour monthly cost is: $" << monthly_cost << endl;
    cout << "Your annual cost is: $" << annual_cost << endl;



    return 0;
}
