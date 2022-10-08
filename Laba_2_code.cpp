/Подключение библиотек
#include <iostream>

using namespace std;

// Описание функции main - основной программы
int main()
{
	//Объявление переменных  
	int number, preview_number, count;	
	number = 0;
	preview_number = 1;
	count = 0;
	int arr[45];

	//Цикл для подсчета первых 45-ти чисел Фибоначчи
	for (count = 0; count < 45; count++)
	{
		number = number + preview_number;
		preview_number = number - preview_number;

		//Каждое подсчитанное число добавляется в массив
		arr[count] = number;
	}
	//Цикл для вывода элементов массива
	for (int i = 0; i < 45; i++)
	{
		cout << i + 1 << " " << arr[i] << endl;
	}
}
