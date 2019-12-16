#include "pch.h"
#include <iostream>
using namespace std;
int i, j;
void SelectionSort(int A[], int n) //сортировка выбором
{
	int count, key;
	for (i = 0; i < n - 1; i++)
	{
		count = A[i]; key = i;
		for (j = i + 1; j < n; j++)
			if (A[j] < A[key]) key = j;
		if (key != i)
		{
			A[i] = A[key];
			A[key] = count;
		}
	}
	cout << "Результирующий массив: ";
	for (i = 0; i < n; i++) cout << A[i] << " "; //вывод массива
}
//главная функция
void main()
{
	setlocale(LC_ALL, "Rus");
	int n, A[1000];
	cout << "Количество элементов > "; cin >> n;
	for (i = 0; i < n; i++) //ввод массива
	{
		cout << i + 1 << " элемент > "; cin >> A[i];
	}
	SelectionSort(A, n);
	system("pause>>void");
}