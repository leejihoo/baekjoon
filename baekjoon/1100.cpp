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
			if ((i + j) % 2 == 0) // �Ͼ�ĭ�� ���
			{
				if (chess[i][j] == 'F') // ���� �ö� ���
					N++;
			}
		}
	}

	cout << N;
}