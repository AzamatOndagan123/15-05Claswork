// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"



#include <iostream>
#include <clocale>
using namespace std;

//����: ������� ������� �������.���������� ��������� ������� ��� ������ ���������,
//	��������, ���������� �������(����� ���������� ����������), ��������� ������ �
//	�������, ������ �������� ������� �� ���������� ��������.
//

// ������ ������� printArray
template <typename MyType>
void printArray(const MyType * array, int count)
{
	for (int ix = 0; ix < count; ix++)
		cout << array[ix] << "   ";
	cout << endl;
}

// ������ ������� maxArray
template<typename min>
void maxArray(const min *array, int count)
{
	min max=array[0];
	for (int i = 0; i < count; i++)
	{
		if (max < array[i])
		{
			max = array[i];
		}
	}
	cout << max << endl;
}
// ������ ������� maxArray
template <typename sort>
void SortArray(sort *array, int count)
{
	sort temp;
	for (int i = 0;i < count;i++)
	{
		for (int j = count - 1;j > i;j--)
		{
			if (array[j] < array[j - 1])
			{
				temp = array[j];
				array[j] = array[j - 1];
				array[j - 1] = temp;
			}
		}
	}
}

template <typename poisk>
void PoslArray(poisk *array, int count)
{
	poisk temp;
	cin >> temp;
	for (int i = 0; i <count; i++)
	{
		if (array[i] == temp)
			cout << "������ ��������= " << i + 1 << endl;
		else
			cout << "������� �� ������" << endl;
	}
}



int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	// ������� ��������
	const int iSize = 10,
		dSize = 7,
		fSize = 10,
		cSize = 5;

	// ������� ������ ����� ������
	int    iArray[iSize] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	double dArray[dSize] = { 1.2345, 2.234, 3.57, 4.67876, 5.346, 6.1545, 7.7682 };
	float  fArray[fSize] = { 1.34, 2.37, 3.23, 4.8, 5.879, 6.345, 73.434, 8.82, 9.33, 10.4 };
	char   cArray[cSize] = { "MARS" };

	cout << "\t\tPattern of function of an output of an array on the screen\n\n";

	// ����� ��������� ������ ������� printArray ��� ���� int ����� ������
	cout << "\n Array type int:\n"; printArray(iArray, iSize);

	// ����� ��������� ������ ������� printArray ��� ���� double ����� ������
	cout << "\n Array type double:\n"; printArray(dArray, dSize);

	// ����� ��������� ������ ������� printArray ��� ���� float ����� ������
	cout << "\n Array type float:\n"; printArray(fArray, fSize);

	// ����� ��������� ������ ������� printArray ��� ���� char ����� ������
	cout << "\n Array type char:\n"; printArray(cArray, cSize);

	cout << "-----------------------------" << endl;
	cout << "��� ������� maxArray" << endl;
	cout << "\n Array type int:\n"; maxArray(iArray, iSize);
	cout << "\n Array type double:\n"; maxArray(dArray, dSize);
	cout << "\n Array type float:\n"; maxArray(fArray, fSize);
	cout << "\n Array type char:\n";maxArray(cArray, cSize);
	cout << "-----------------------------" << endl;
	cout << "��� ������� sortArray" << endl;

	cout << "\n Array type int:\n"; SortArray(iArray, iSize);printArray(iArray, iSize);
	cout << "\n Array type double:\n"; SortArray(dArray, dSize);printArray(dArray, dSize);
	cout << "\n Array type float:\n"; SortArray(fArray, fSize);printArray(fArray, fSize);
	cout << "\n Array type char:\n";SortArray(cArray, cSize);printArray(cArray, cSize);
	cout << "-----------------------------" << endl;
	cout << "��� ������� sortArray" << endl;
	cout << "\n Array type int:\n"; PoslArray(iArray, iSize);printArray(iArray, iSize);
	cout << "\n Array type double:\n"; PoslArray(dArray, dSize);printArray(dArray, dSize);
	cout << "\n Array type float:\n"; PoslArray(fArray, fSize);printArray(fArray, fSize);
	cout << "\n Array type char:\n";PoslArray(cArray, cSize);printArray(cArray, cSize);
	return 0;
}