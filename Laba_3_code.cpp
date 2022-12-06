//Подключение библиотек
#include <iostream>
#include <cmath>

using namespace std;

//Описание функции len для нахождения длины отрезка и инициализация переменных-координат точек
void len(double a_x, double a_y, double b_x, double b_y)
{
	//Нахождение длины отрезка на плоскости с помощью формулы
	double len_of_segment = sqrt(pow((b_x - a_x), 2) + pow((b_y - a_y), 2));
	//Вывод полученного значения
	cout << len_of_segment << endl;
}

//Описание функции main - основной программы
int main()
{
	//Инициализация переменных-координат точек
	double a_x, a_y, b_x, b_y;
	//Ввод координат точек A и B/C/D/любой точки
	cin >> a_x >> a_y >> b_x >> b_y;
	//Обращение к функции len
	len(a_x, a_y, b_x, b_y);

	//Возврат кода ошибки 0, означающего, что программа выполнилась успешно
	return 0;
}
