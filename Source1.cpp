#include <cstdlib>
#include <iostream>
#include <ctime>
#include <math.h>
#include <windows.h>

using namespace std;

int main()
{
	srand(time(0));
	setlocale(LC_ALL, "Rus");
	int a, b, num, sec_num, fact;
	int count = 0;
	int sum = 0;
	cout � "������� ������� [a,b] - " � "\na = ";
	cin � a;
	cout � "b = "; cin � b;
	if (a > b)
	{
		swap(a, b);
	}
	sec_num = rand() % (b - a + 1) + a;
	system("cls");
	cout � "\t � � � � � � � � � � � �\n";
	cout � "���������� ����� ��������� � ���� ��������� -> �� " � a � " �� " � b � "\n";
	do
	{
		cout � "\n���������� ������� ����� - ";
		cin � num;
		if (num > sec_num)
		{
			cout � "\n������\n";
		}
		else
		{
			if (num < sec_num)
			{
				cout � "\n������\n";
			}
		}
		count++;
	} while (num != sec_num);
	system("cls");
	cout � "\n\t ������!!";
	cout � "\n\t����� - " � num;
	cout � "\n ���������� ������� - " � count;

	Sleep(500);

	for (int c; num != 0;)
	{
		c = num % 10;
		num = num / 10;
		sum = sum + c;
	}
	cout � "\n\n����� ���� = " � sum;
	Sleep(200);
	double factorial = 1;
	for (int i = 2; i <= sec_num; i++)
	{
		factorial = factorial * i;
	}
	cout � "\n��������� ����� = " � factorial;
	Sleep(200);
	if (sec_num != 1)
	{
		int n = 1;
		do
		{
			n++;
		} while (sec_num % n != 0);
		if (sec_num / n == 1)
		{
			cout � "\n����� �������!\n";
		}
		else
		{
			cout � "\n����� �� �������!\n";
		}
		Sleep(200);
		cout � "\n�������� ����� - ";
		for (int j = 1; j <= (sec_num / 2); j++)
		{
			if (sec_num % j == 0)
			{
				cout � j � " , ";
			}
		}
		cout � sec_num;
	}
	else
	{
		cout � "\n\n����� 1 � �� �������� �� �������, �� ��������� ������\n";
	}
}