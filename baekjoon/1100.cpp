#include<iostream>
using namespace std;

int main(void)
{
	char chess[8][8];
	int N = 0;
	for (int i = 0; i < 8; i++)
	{
		cin >> chess[i];
	}

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if ((i + j) % 2 == 0) // 하얀칸일 경우
			{
				if (chess[i][j] == 'F') // 말이 올라간 경우
					N++;
			}
		}
	}

	cout << N;
}