#include<iostream>
using namespace std;

int main(void)
{
	char ch[1000001];
	int i = 0;
	int N = 0; // �ܾ��� ����
	cin.getline(ch, 1000001); // ���ڻ��� ���⸦ \0�� �ƴ� �������� �ٲ��ش�.
	while (ch[i] != '\0') 
	{
		if (ch[i] == ' ') // ����� �ܾ��ϳ� �߰�
		{
			N++;
		}
		i++;
	}
	if (ch[i-1] == ' ') // ������ ���� ������ ������ �ý�
	{
		N--;
	}
	if (ch[0] == ' ') // ���� �� ó���� �����Ͻ�
	{
		N--;
	}
	N++; // ������ \0�� ����� �Ǵ�
	cout << N;
}