#include <iostream>
#include <cmath>; // для числа пи (спросить) M_PI

using namespace std;
void main()
{
	const double Pi = 3.141592653589793; // Переменная пи

	setlocale(LC_ALL, "Rus");    //Добавляем русские символы в консоль
	double degress, min, sec;
	cout << "Введите градусы, минуты, секунды:\n";
	cin >> degress >> min >> sec; // Ввод данных
	double radian;
	radian = (degress + (min + sec / 60) / 60 * fabs(degress) / degress) * Pi / 180;// Перевод полученных данных в радианы спросить почему не работает M_PI
	cout << radian << endl;
}