#include "pch.h"
#include <iostream>
using namespace std;
int i, j;
void SelectionSort(int A[], int n) //���������� �������
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
	cout << "�������������� ������: ";
	for (i = 0; i < n; i++) cout << A[i] << " "; //����� �������
}
//������� �������
void main()
{
	setlocale(LC_ALL, "Rus");
	int n, A[1000];
	cout << "���������� ��������� > "; cin >> n;
	for (i = 0; i < n; i++) //���� �������
	{
		cout << i + 1 << " ������� > "; cin >> A[i];
	}
	SelectionSort(A, n);
	system("pause>>void");
}