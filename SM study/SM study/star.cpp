//Ǫ�� �ð� 10�� 
#include <iostream>
using namespace std;

int main()
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 5; i++)   // ���������� �̿��� �� �ึ�� "o"�� ���� �����ϰ� ���� ( while ���� �������� )
	{
		
		for (j = 0; j < i; j++)
		{
			cout << "O";
		}
		cout << "*";
		cout << endl;
	}
}