// sixth_exercise.cpp - программа для расчета кол-ва литрво бензина на 100 километров, отталкиваясь от расстояния и объема бензина

#include <iostream>

using namespace std;

int main()
{
    double distance_in_kilometers, volume_of_gasoline_in_liters;
    double result;
    cout << "Enter distance (in kilometers) : "; cin >> distance_in_kilometers;
    cout << "Enter volume of gasoline (in liters) : "; cin >> volume_of_gasoline_in_liters;

    result = (volume_of_gasoline_in_liters / distance_in_kilometers) * 100;

    cout << "Number of liters per 100 kilometers : " << result;

    return 0;
}