#include <iostream>
using namespace std;

int main(void)
{
	int i;
	int num = 2; // �Ҽ�
	int jud; // �Ҽ� �Ǻ�
	int count = 0;

		while (count < 10)
		{
			jud = 2;
			for (int i = 2; i < num; i++)
			{
				if (num%i == 0)
				{
					jud = 0;
					break;
				}

			}
			if (jud == 2)
			{
				cout << num << " ";
				count++;
			}
			
			num++;
	}
	return 0;
}
