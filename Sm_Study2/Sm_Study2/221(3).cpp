#include <iostream>
using namespace std;

int Fibo(int fNum)
{
	if (fNum == 0)
		return 0;
	if (fNum <= 2)
		return 1;
	else
		return Fibo(fNum - 2) + Fibo(fNum-1);
}

int main()
{
	int n;
	cout << "피보나치 수열 n개 입력 : ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << Fibo(i) << ",";
	}
	
	return 0;
}