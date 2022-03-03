#include <iostream>
#include <iomanip>
using namespace std;
/*
 * A cookie recipe calls for the following ingredients:
 * • 1.5 cups of sugar
 * • 1 cup of butter
 * • 2.75 cups of flour
 * The recipe produces 48 cookies with this amount of the ingredients. Write a program
 * that asks the user how many cookies he or she wants to make, and then displays the
 * number of cups of each ingredient needed for the specified number of cookies.
 */

int main()
{
    const float cookies = 48, sugar = 1.5, butter = 1, flour = 2.75;
    float num_cookies, need_cup_sug, need_cup_but, need_cup_flour;

    cout << "How many cookies would like to make?: ";
    cin >> num_cookies;

    need_cup_sug = (sugar * num_cookies) / cookies;
    need_cup_but = (butter * num_cookies) / cookies;
    need_cup_flour = (flour * num_cookies) / cookies;

    cout << "\nYou would need " << setprecision(3) << need_cup_sug << " of cups of sugar." << endl;
    cout << "You would need " << setprecision(3) << need_cup_but << " of cups of butter." << endl;
    cout << "You would need " << setprecision(3) << need_cup_flour << " of cups of flour." << endl;


    return 0;
}
