/*
 * Author : Rohit Shakya
 * Date   : June-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(1)
 * Title :  MealCost
 */
#include <bits/stdc++.h>

using namespace std;

// Complete the solve function below.
void solve(double meal_cost, int tip_percent, int tax_percent) {
    double totalCost=meal_cost+(meal_cost*(tip_percent+tax_percent))/100;
    cout<<round(totalCost)<<endl;
}

int main()
{
    double meal_cost;
    cin >> meal_cost;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tip_percent;
    cin >> tip_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tax_percent;
    cin >> tax_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}
