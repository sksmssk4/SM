#include <iostream>
using namespace std;

int gcM(int a, int b)
{
	int r;
	while (a > 0)
	{
		if (a < b)
		{
			r = b%a;
			(a, b) = (a, r);
			if (b%a == 0)
			{
				return a;
			}
			return r;
		}
		else if (a == b)
		{
			return a;
		}
		else if (a > b)
		{
			r = a%b;
			(a, b) = (r,b);
			if (a%b == 0)
			{
				return b;
			}
			return r;
		}
	}
	
}

int main()
{
	int num1, num2;
	cout << "�ΰ��� ���� �Է� : "; cin >> num1; cin >> num2;
	cout << "�� ���� �ִ����� : " << gcM(num1,num2) << endl;
	return 0;
}