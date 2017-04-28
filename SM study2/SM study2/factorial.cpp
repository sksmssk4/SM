//푸는 시간 08:00~08:41

#include <iostream>
using namespace std;

int main()
{
	int num;
	int i = 1;
	int rst = 1;
	cout << "정수 입력 : ";
	cin >> num;
	while (i < num)
	{
		i++;
		rst *= i;
	}
	cout << "n! = " << rst << endl;
}