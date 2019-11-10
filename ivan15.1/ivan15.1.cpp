// ivan15.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Даны массивы A и B одинакового размера N. 
//Поменять местами их содержимое и вывести вначале элементы преобразованного массива A, 
//а затем — элементы преобразованного массива B.

#include <iostream>
#include <stdio.h> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	int N, i, s;
	s = 0;
	cout << "Введите, пожалуйста, кол-во элементов массива N = ";
	cin >> N;

	int* arr = new int[N];
	cout << "Введите, пожалуйста, массив А: ";
	for (i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	int* arrr = new int[N];
	cout << "Введите, пожалуйста, массив В: ";
	for (i = 0; i < N; i++)
	{
		cin >> arrr[i];
	}

	for (int i = 0; i < N; i++)
	{
		s = arr[i];
		arr[i] = arrr[i];
		arrr[i] = s;

	}
	cout << "Новый А: "<< endl;
	for (i = 0; i < N; i = i ++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "Новый В: "<< endl;
	for (i = 0; i < N; i = i ++)
	{
		cout << arrr[i] << " ";
	}


	return 0;
}
