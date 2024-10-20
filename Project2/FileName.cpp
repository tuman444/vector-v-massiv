#include <iostream>
#include <string>
#include <windows.h>
#include <vector>
#include <algorithm>

using namespace std;

void _sort_arr(int* arr, int razmer)
{
	int kor = 0; int temp = 0; for (int i = 0; i < razmer; i++)
	{
		kor = i; for (int k = 0; k < razmer; k++)
		{
			if (arr[kor] < arr[k])
			{
				temp = arr[i];
				arr[i] = arr[kor];
				arr[kor] = temp;
			}
		}
	}
}

int main()
{
	SetConsoleCP(1251); SetConsoleOutputCP(1251);
	vector <int> v1;
	int length;
	cout << "¬ведите длину вектора: " << endl;
	cin >> length;
	int s;
	for (size_t i = 0; i < length; i++)
	{
		cout << "¬ведите значение " << i+1 << " вектора" << endl;
		cin >> s;
		v1.push_back(s);
	}
	int *p = new int [length];
	for (int i = 0; i < length; i++)
	{
		p[i] = v1[i];
	}

	//sort(v1.begin(), v1.end());
	
	_sort_arr(p, length);
	cout << "ќтсортированный массив = ";
	for (size_t i = 0; i < length; i++)
	{
		cout << p[i] << ", ";
	}
	/*
	for (int i = 0; i < length; i++)
	{
		cout << "«начение вектора = " << v1[i] << endl;
	}
	*/
}