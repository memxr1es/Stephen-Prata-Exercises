// fourth_exercise.cpp - запрос возраста, с последующим выводом в месяцах.

#include <iostream>

using namespace std;

int main()
{
    int age;

    cout << "Enter your age : ";
    cin >> age;

    cout << "Your age in month is " << age * 12;

    return 0;
}