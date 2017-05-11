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
	cout << "두개의 정수 입력 : "; cin >> num1; cin >> num2;
	cout << "두 수의 최대공약수 : " << gcM(num1,num2) << endl;
	return 0;
}