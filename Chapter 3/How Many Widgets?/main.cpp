#include <iostream>

using namespace std;
/*
 * The Yukon Widget Company manufactures widgets that weigh 12.5 pounds each.
 * Write a program that calculates how many widgets are stacked on a pallet, based on
 * the total weight of the pallet. The program should ask the user how much the pallet
 * weighs by itself and with the widgets stacked on it. It should then calculate and display
 * the number of widgets stacked on the pallet.
 */

int main()
{
    const float widget = 12.5;
    float pallet_weight, num_of_widgets, pallet_w_widget;

    cout << "How much does the pallet weight by itself?: ";
    cin >> pallet_weight;
    cout << "How much does the pallet weight with the widgets?: ";
    cin >> pallet_w_widget;

    num_of_widgets = (pallet_w_widget - pallet_weight) / widget;

    cout << "The number of widgets is: " << num_of_widgets << endl;

    return 0;
}
