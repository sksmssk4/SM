//Ǫ�� �ð� 09:20~09:30(10��)
#include <iostream>
using namespace std;
int main()
{
	int i = 0; 
	int inputNum = 0;
	int rst = 0;

	while (i < 5)
	{
		cout << "���� �Է� : ";
		cin >> inputNum;
		i++;
		if (inputNum < 1)
		{
			cout << "�ٽ��Է�! : ";
			cin >> inputNum;
		}
		rst += inputNum;
	}
	
	cout << "������ �� : " << rst;
	return 0;
}