#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double mealCost = 10.25;
    int tipPercent = 17;
    int taxPercent = 5;

    mealCost =
        mealCost*tipPercent/100 +
        mealCost*taxPercent/100 +
        mealCost;
    cout << mealCost <<  endl;
    cout << round(mealCost) <<  endl;

    return EXIT_SUCCESS;
}