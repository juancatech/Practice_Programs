#include <iostream>
using namespace std;
/*
 * Write a program that asks the user for the number of males and the number of females
 * registered in a class. The program should display the percentage of males and females
 * in the class.
 * Hint: Suppose there are 8 males and 12 females in a class. There are 20 students in the
 * class. The percentage of males can be calculated as 8 ÷ 20 = 0.4, or 40%. The percent-
 * age of females can be calculated as 12 ÷ 20 = 0.6, or 60%.
 */

int main()
{
    float num_male, num_female, total_students,ptg_male, ptg_female;

    cout << "Please enter the number of males in the class: ";
    cin >> num_male;
    cout << "Please enter the number of females in the class: ";
    cin >> num_female;

    total_students = num_male + num_female;

    ptg_male = (num_male / total_students) * 100;
    ptg_female = (num_female / total_students) * 100;

    cout << "\nThe percentage of male in the class is: " << ptg_male << "%." << endl;
    cout << "The percentage of female in the class is: " << ptg_female << "%." << endl;

    return 0;
}
