// first_exercise.cpp - программа для преобразования роста из дюймов в футы и дюймы

#include <iostream>

using namespace std;

int main()
{
    const int ratio = 12;
    int inches = 0, feets = 0;

    cout << "Enter a inches : __\b\b";
    cin >> inches;

    feets = inches / ratio;
    inches = inches % ratio;

    cout << "Result : " << feets << "'" << inches;

    return 0;
}