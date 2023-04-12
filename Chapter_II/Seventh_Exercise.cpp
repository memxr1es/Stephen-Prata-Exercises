// seventh_exercise.cpp - программа для перевода с европейского стиля расчета затрат топлива, в стиль США

#include <iostream>

using namespace std;

int main()
{
    const double ratio_miles = 62.14, ratio_gallons = 3.875;
    double gasoline_on_100_kilometers;
    double gallons, miles;
    cout << "Enter number of liters per 100 kilometers : "; cin >> gasoline_on_100_kilometers;

    miles = (gasoline_on_100_kilometers / 100) * ratio_miles;

    cout << miles;

    return 0; 
}
