// fifth_exercise.cpp - программа перевода из Цельсия в Фаренгейты

#include <iostream>

using namespace std;

int main()
{
    double celsius, fahrenheit = 0;

    cout << "Please enter a Celsius value : ";
    cin >> celsius;

    fahrenheit = 1.8 * celsius + 32;

    cout << celsius << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit";

    return 0;
}