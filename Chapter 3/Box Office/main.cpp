#include <iostream>

using namespace std;
/*
 * A movie theater only keeps a percentage of the revenue earned from ticket sales. The
 * remainder goes to the movie distributor. Write a program that calculates a theater’s
 * gross and net box office profit for a night. The program should ask for the name of the
 * movie, and how many adult and child tickets were sold. (The price of an adult ticket is
 * $10.00 and a child’s ticket is $6.00.) It should display a report similar to
 * Movie Name: “Wheels of Fury”
 * Adult Tickets Sold: 382
 * Child Tickets Sold: 127
 * Gross Box Office Profit: $ 4582.00 50
 * Net Box Office Profit: $ 916.40 10
 * Amount Paid to Distributor: $ 3665.60 40
 * NOTE: 9164
 * Assume the theater keeps 20 percent of the gross box office profit.
 */

int main()
{
    const float price_adult = 10.00, price_child = 6.00;
    string movie_name;
    float gross_theater, net_box_profit, distro_paid, adult_tickets, child_tickets, total_income;

    cout << "Name of the movie: ";
    getline(cin, movie_name);
    cout << "How many Adult Tickets?: ";
    cin >> adult_tickets;
    cout << "How many Child Tickets?: ";
    cin >> child_tickets;

    total_income = (adult_tickets * price_adult) + (child_tickets * price_child);
    gross_theater = total_income * 0.20;
    net_box_profit = total_income * 0.40;
    distro_paid = total_income * 0.40;
    cin.ignore();
    cout << "\n-------------------------------------------------------" << endl;
    cout << "Movie Name: " << movie_name << endl;
    cout << "Adult Tickets: " << adult_tickets << endl;
    cout << "Child Tickets: " << child_tickets << endl;
    cout << "Gross Box Office Profit: $" << gross_theater << endl;-+

    cout << "Net Box Office Profit: $" << net_box_profit << endl;
    cout << "Amount Paid to Distributor: $" << distro_paid << endl;
    return 0;
}
