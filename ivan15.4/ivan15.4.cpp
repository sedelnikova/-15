// ivan15.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Дан массив размера N. Обнулить элементы массива, 
//расположенные между его минимальным и максимальным элементами (не включая минимальный и максимальный элементы).

#include <iostream>
#include <stdio.h> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int N, i, max, min, index_1, index_2;
	cout << "Введите, пожалуйста, N = ";
	cin >> N;

	int* arr = new int[N];
	cout << "Введите, пожалуйста, массив: ";
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	max = arr[0];
	min = arr[0];
	index_1 = 0;
	index_2 = 0;
	for (int i = 0; i < N; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			index_1 = i;
		}
	}
	for (int i = 0; i < N; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			index_2 = i;
		}
	}
	if (index_1 > index_2)
	{ 
		for (int i = index_2 + 1; i < index_1; i++)
		{
				arr[i] = 0;
		}
	}
	else
	{
		for (int i = index_1 + 1; i < index_2; i++)
		{
			arr[i] = 0;
		}
	}
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << " ";
	}
	
	return 0;
}