// ivan15.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Дан целочисленный массив размера N. Увеличить все нечетные числа, содержащиеся в массиве, 
//на исходное значение последнего нечетного числа. 
//Если нечетные числа в массиве отсутствуют, то оставить массив без изменений

#include <iostream>
#include <stdio.h> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int N, i, x, index_x;
	cout << "Введите, пожалуйста, N = ";
	cin >> N;

	int* arr = new int[N];
	cout << "Введите, пожалуйста, массив: ";
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < N; i++)
	{
		if (arr [i] % 2 != 0)
		{
			x = arr[i];
			index_x = i;

				if (i > index_x)
				{
					x = arr[i];
				}
		}
	}
	for (int i = 0; i < N; i++)
	{
		if (arr[i] % 2 != 0)
		{
			arr[i] += x;
		}

		cout << arr[i] << " ";
	}


	return 0;
}