//푸는 시간 09:20~09:30(10분)
#include <iostream>
using namespace std;
int main()
{
	int i = 0; 
	int inputNum = 0;
	int rst = 0;

	while (i < 5)
	{
		cout << "정수 입력 : ";
		cin >> inputNum;
		i++;
		if (inputNum < 1)
		{
			cout << "다시입력! : ";
			cin >> inputNum;
		}
		rst += inputNum;
	}
	
	cout << "정수의 합 : " << rst;
	return 0;
}