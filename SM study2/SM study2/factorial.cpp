//Ǫ�� �ð� 08:00~08:41

#include <iostream>
using namespace std;

int main()
{
	int num;
	int i = 1;
	int rst = 1;
	cout << "���� �Է� : ";
	cin >> num;
	while (i < num)
	{
		i++;
		rst *= i;
	}
	cout << "n! = " << rst << endl;
}