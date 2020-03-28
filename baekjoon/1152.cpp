#include<iostream>
using namespace std;

int main(void)
{
	char ch[1000001];
	int i = 0;
	int N = 0; // 단어의 갯수
	cin.getline(ch, 1000001); // 문자사이 띄어쓰기를 \0이 아닌 공백으로 바꿔준다.
	while (ch[i] != '\0') 
	{
		if (ch[i] == ' ') // 띄어쓰기시 단어하나 추가
		{
			N++;
		}
		i++;
	}
	if (ch[i-1] == ' ') // 마지막 문자 다음에 공백이 올시
	{
		N--;
	}
	if (ch[0] == ' ') // 문장 맨 처음이 공백일시
	{
		N--;
	}
	N++; // 마지막 \0도 띄어쓰기로 판단
	cout << N;
}