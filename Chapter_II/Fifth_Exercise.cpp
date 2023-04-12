// fifth_exercise.cpp - программа для расчета процента численности страны от численности на Земле

#include <iostream>

using namespace std;

int main()
{
    long long population_of_the_world = 0, population_of_the_rus = 0;
    double population_percent;

    cout << "Enter the world's population : "; cin >> population_of_the_world;
    cout << "Enter the population of Russian : "; cin >> population_of_the_rus;

    population_percent = (double (population_of_the_rus) / double (population_of_the_world)) * 100;

    cout << "The population of the Russian is " << population_percent << "%" << " of the world";

    return 0;
}