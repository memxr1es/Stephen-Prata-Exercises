// third_exercise.cpp - программа преобразования широты (в градусах, минутах и секундах), в широту в десятичном формате

#include <iostream>

using namespace std;

int main()
{
    double degrees = 0, minutes = 0, seconds = 0;
    double latitude_in_decimal = 0;

    const char angular_sec = 60, angular_min = 60;

    cout << "Enter a latitude in degrees, minutes, and seconds :\n";
    cout << "First, enter the degrees : "; cin >> degrees;
    cout << "Next, enter the minutes of arc : "; cin >> minutes;
    cout << "Finally, enter the seconds of arc : "; cin >> seconds;

    latitude_in_decimal = (degrees + minutes / 60 + seconds / 3600);

    cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << latitude_in_decimal << " degrees";

    return 0;
}