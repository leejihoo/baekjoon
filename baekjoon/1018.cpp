#include<iostream>
#include<cstring>
#pragma warning(disable : 4996)
using namespace std;

int MinValue(int x, int y, char  board[][51], char Wfirst[][9], char Bfirst[][9]);

int main(void)
{
	int N, M; // 세로, 가로
	int Min = 65;
	int result;
	char Wfirst[8][9]; // 하얀색이 1X1에 칠해져있을때
	char Bfirst[8][9]; // 검은색이 1X1에 칠해져있을때
	char board[51][51];

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		cin >> board[i];
	}

	for (int i = 0; i < 8; i++)
	{
		if (i % 2 == 0) // 짝수줄일때
		{
			strncpy(Wfirst[i],"WBWBWBWB",sizeof("WBWBWBWB"));
			strncpy(Bfirst[i],"BWBWBWBW",sizeof("WBWBWBWB"));
		}
		else // 홀수 줄일때
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