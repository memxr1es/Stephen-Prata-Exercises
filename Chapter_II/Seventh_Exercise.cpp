// seventh_exercise.cpp - программа для перевода с европейского стиля расчета затрат топлива, в стиль США

#include <iostream>

using namespace std;

int main()
{
    const double ratio_miles = 62.14, ratio_gallons = 3.875;
    double gasoline_on_100_kilometers;
    double gallons, miles;
    cout << "Enter number of liters per 100 kilometers : "; cin >> gasoline_on_100_kilometers;

    miles = ((ratio_miles * ratio_gallons) / gasoline_on_100_kilometers);

    cout << miles;

    return 0; 
}
