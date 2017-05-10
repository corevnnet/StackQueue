// StackQueue.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

double gt(int data)
{
	if (data == 0)
	{
		return 1;
		
	}
	else
	{
		return gt(data - 1)* data;
	}
}

int Sum(int key)
{
	//tn(n) = tn(n - 1) + n;
	if (key == 1)
	{
		return 1;
	}
	else
	{
		return Sum(key - 1) + key;
	}
}

// key =3,  3 - 2 - 1 - 0
//? 1
int SumArray(int arr[],int n)
{
	//SumArray(arr[n] = SumArray(arr[n - 1]) + arr[n])
	if (n  == 0)
	{
		return arr[0];
	}
	else
	{
		return SumArray(arr, n - 1) + arr[n];
	}
}
int Odd(int key)
{
	if (key == 0)
	{
		return 0;
	}
	else
	{
		if (key % 2 != 0)
		{
			return Odd(key - 1) + key;
		}
		else
		{
			return Odd(key - 1);
		}
	}
}
int main()
{
	int c = Odd(7);
	cout << c;
	//int arr[] = { 1,2,3 };

	//int c =  SumArray(arr, 2); //Lưu ý mảng đánh số từ 0 nên phải truyền vào 2 
	//cout << c;
	system("pause");
}

