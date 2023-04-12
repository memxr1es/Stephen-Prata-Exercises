// fourth_exercise.cpp - программа перевода целого количества секунд, в дни, часы, минуты и секунды

#include <iostream>

using namespace std;

int main()
{
    const int hours_in_day = 24, minutes_in_hour = 60, seconds_in_minutes = 60;
    long seconds;

    cout << "Enter the number of seconds : "; cin >> seconds;
    long n = seconds;

    int days = n / (hours_in_day * minutes_in_hour * seconds_in_minutes); // days = n / (24 * 3600)

    n = n % (hours_in_day * minutes_in_hour * seconds_in_minutes);// n = n % (24 * 3600)
    int hours = n / (minutes_in_hour * seconds_in_minutes); // hours = n / 3600

    n %= minutes_in_hour * seconds_in_minutes;
    int minutes = n / minutes_in_hour;

    n %= seconds_in_minutes;
    int sec = n;
    
    cout << seconds << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << sec << " seconds";

    return 0;
}

