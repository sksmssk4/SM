#include <iostream>
using namespace std;

int Min_Compare(int num1, int num2, int num3)
{
	if (num1 < num2)
	{
		return(num1 < num3 ? num1 : num3);
	}
	if (num2 < num3)
	{
		return(num2 < num1 ? num2 : num1);
	}
	if (num3 < num1)
	{
		return(num3 < num2 ? num3 : num2);
	}
}

int Max_Compare(int num1, int num2, int num3)
{
	if (num1 > num2)
	{
		return(num1 > num3 ? num1 : num3);
	}
	if (num2 > num3)
	{
		return(num2 > num1 ? num2 : num1);
	}
	if (num3 > num1)
	{
		return(num3 > num2 ? num3 : num2);
	}
}
int main()
{
	int iNum1 = 0;
	int iNum2 = 0;
	int iNum3 = 0;

	cout << "�� ������ �Է��϶�(1) ";
	cin >> iNum1;
	cout << "�� ������ �Է��϶�(2) ";
	cin >> iNum2;
	cout << "�� ������ �Է��϶�(3) ";
	cin >> iNum3;

	cout << "���� ���� �� : " << Min_Compare(iNum1, iNum2, iNum3) << endl;
	cout << "���� ū �� : " << Max_Compare(iNum1, iNum2, iNum3) << endl;

	return 0;
}