// seventh_exercise.cpp - программа с запросом ввода часов и минут, с последующем выводом в нужном формате

#include <iostream>

using namespace std;

void format(int hours, int minutes);

int main()
{
    int hours, minutes;

    cout << "Enter the number of hours : ";
    cin >> hours;
    cout << "Enter the number of minutes : ";
    cin >> minutes;

    format(hours, minutes);

    return 0;
}

void format(int hours, int minutes)
{
    cout << "Time : " << hours << ":" << minutes;
}