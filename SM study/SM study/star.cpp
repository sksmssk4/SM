//푸는 시간 10분 
#include <iostream>
using namespace std;

int main()
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 5; i++)   // 이중포문을 이용해 각 행마다 "o"의 수가 증가하게 설정 ( while 문은 실패햇음 )
	{
		
		for (j = 0; j < i; j++)
		{
			cout << "O";
		}
		cout << "*";
		cout << endl;
	}
}