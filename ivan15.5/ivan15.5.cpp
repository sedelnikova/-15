// ivan15.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Дан массив размера N, все элементы которого, кроме первого, упорядочены по возрастанию. 
//Сделать массив упорядоченным, переместив первый элемент на новую позицию.

#include <iostream>
#include <stdio.h> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int N;
	double a;
	cout << "Введите, пожалуйста, N = ";
	cin >> N;

	double* arr = new double[N];
	cout << "Введите, пожалуйста, массив: ";
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	a = 0;

	for (int j = 0; j < N - 1; j++)
	{
		for (int i = 0; i < N - j - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				a = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = a;
			}

		}
	}
	cout << endl;
	cout << "Mассив: " << endl;
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
