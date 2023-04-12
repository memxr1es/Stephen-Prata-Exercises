// sixth_exercise.cpp - программа перевода световых лет в астрономические единицы

#include <iostream>

using namespace std;

void converter(double lightYears);

int main()
{
    double lightYears = 0;

    cout << "Enter the number of light years : ";
    cin >> lightYears;
    converter(lightYears);

    return 0;
}

void converter(double lightYears)
{
    cout << lightYears << " light years = " << lightYears * 63240 << " astronomical units";
}