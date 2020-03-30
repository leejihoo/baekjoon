#include<iostream>
#include<cstring>
#pragma warning(disable : 4996)
using namespace std;

int MinValue(int x, int y, char  board[][51], char Wfirst[][9], char Bfirst[][9]);

int main(void)
{
	int N, M; // ����, ����
	int Min = 65;
	int result;
	char Wfirst[8][9]; // �Ͼ���� 1X1�� ĥ����������
	char Bfirst[8][9]; // �������� 1X1�� ĥ����������
	char board[51][51];

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		cin >> board[i];
	}

	for (int i = 0; i < 8; i++)
	{
		if (i % 2 == 0) // ¦�����϶�
		{
			strncpy(Wfirst[i],"WBWBWBWB",sizeof("WBWBWBWB"));
			strncpy(Bfirst[i],"BWBWBWBW",sizeof("WBWBWBWB"));
		}
		else // Ȧ�� ���϶�
		{
			strncpy(Wfirst[i], "BWBWBWBW", sizeof("WBWBWBWB"));
			strncpy(Bfirst[i], "WBWBWBWB", sizeof("WBWBWBWB"));
		}
	}

	for (int i = 0; i < N - 7; i++)
	{
		for (int j = 0; j < M - 7; j++) {
			result = MinValue(i,j,board,Wfirst,Bfirst);
			if (result < Min)
			{
				Min = result;
			}
		}
	}

	cout << Min;
}
int MinValue(int x, int y, char  board[][51], char Wfirst[][9],char Bfirst[][9]) {
	int Wcount = 0;
	int Bcount = 0;

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (board[i+x][j+y] != Wfirst[i][j])
				Wcount++;

			if (board[i+x][j+y] != Bfirst[i][j])
				Bcount++;
		}
	}
	return Wcount < Bcount ? Wcount : Bcount;
}