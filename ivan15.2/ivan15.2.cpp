// ivan15.2.cpp Дан массив A размера N. Сформировать новый массив B того же размера по следующему правилу: 
// элемент BK равен среднему арифметическому элементов массива A с номерами от 1 до K.

#include <iostream>
#include <stdio.h> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int N, k;
	double s;
	cout << "Введите, пожалуйста, N = ";
	cin >> N;

	double* arr = new double[N];
	cout << "Введите, пожалуйста, массив: ";
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	cout << "Введите k ";
	cin >> k;
	s = 0;
	double* arrr = new double[N];

	for (int i = 0; i <= k; i++)
	{
		s = s + arr[i];
	}
	cout << endl;

	for (int i = 0; i <= (k - 1); i++)
	{
		arrr[i] = arr[i];

	}

	arrr[k] = (s / (k + 1));

	for (int i = k + 1; i < N; i++)
	{
		arrr[i] = arr[i];
	}
	cout << endl;

	cout << "Массив В: " << endl;

	for (int i = 0; i < N; i++)
	{
		cout << arrr[i] << " ";
	}
	cout << endl;
	return 0;
}