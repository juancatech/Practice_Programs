#include <iostream>

using namespace std;
/*
 * A bag of cookies holds 30 cookies. The calorie information on the bag claims that there
 * are 10 “servings” in the bag and that a serving equals 300 calories. Write a program
 * that asks the user to input how many cookies he or she actually ate and then reports
 * how many total calories were consumed.
 */

int main()
{
    int cookies, consumed_calories;

    cout << "How many cookies did you ate?: ";
    cin >> cookies;

    consumed_calories = 100 * cookies;

    cout << "\nYou consumed " << consumed_calories << " calories." << endl;

    return 0;
}
