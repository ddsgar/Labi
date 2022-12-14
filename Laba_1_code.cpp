// Подключение библиотек
#include <iostream>
#include <cmath>

using namespace std;

// Описание функции main - основной программы
int main()
{
    // Объявление переменных - начальных и конечных координат
    float x1, x2, y1, y2;

    //Вывод на экран предложения ввести координаты начальной и конечной точек
    cout << "Введите (x y) исходной точки:" << endl;
    cin >> x1 >> y1;
    cout << "Введите (x y) конечной точки" << endl;
    cin >> x2 >> y2;

    //Вычисление длины отрезка между двумя точками на плоскости 
    //по формуле длины отрезка
    cout << sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));

    // возврат кода ошибки 0, означающего,
    // что программа выполнилась успешно
    return 0;

}
