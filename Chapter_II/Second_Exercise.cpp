// second_exercise.cpp - программа для расчета индекса массы тела, по вводимым данным

#include <iostream>

using namespace std;

int main()
{
    const double weight_ratio = 2.2, height_ratio = 0.0254; // Константы коэффицентов преобразования
    double feets = 0, inches = 0, weight_in_pounds = 0, BMI = 0; // Рост в футах и дюймах, и вес в фунтах
    double height_in_meters = 0, weight_in_kilo = 0; // Рост в метрах, вес в килограммах

    cout << "Enter your properties : \n";
    cout << "Height (feets) : "; cin >> feets;
    cout << "Height (inches) : "; cin >> inches;
    cout << "Weights (in pounds) : "; cin >> weight_in_pounds;

    inches += feets * 12; // Преобразование футов в дюймы
    height_in_meters = inches * height_ratio; // Преобразование дюймов в метры

    weight_in_kilo = weight_in_pounds / weight_ratio; // Преобразование фунтов в килограммы

    BMI = weight_in_kilo / (height_in_meters * height_in_meters); // Расчет индекса массы тела, путем деления массы тела, на квадрат роста

    cout << "Your BMI : " << BMI;

    return 0;
}