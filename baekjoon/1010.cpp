#include<iostream>
#include <cstring>

using namespace std;

int d[31][31];
 long long combination(int n, int r) {

	if (n == r || r == 0) return 1;
	if (d[n][r]) return d[n][r];
	else return  d[n][r] = combination(n - 1, r - 1) + combination(n - 1, r);

}

int main(void)
{
	//int T;
	//
	//int N[100];
	//int M[100];
	//long long de[100];
	//long long mol[100];
	//fill_n(de, 100, 1);
	//fill_n(mol, 100, 1);
	//cin >> T;
	//for (int i = 0; i < T; i++)
	//{
	//	cin >> N[i];
	//	cin >> M[i];
	//}
	//for (int i = 0; i < T; i++)
	//{
	//	for (int j = 0; j < N[i]; j++)
	//	{
	//		de[i] = de[i] * M[i];
	//		M[i]--;
	//	}
	//	int ChangeN = N[i];
	//	for (int j = 0; j < N[i]; j++)
	//	{
	//		mol[i] = mol[i] * ChangeN;
	//		ChangeN--;
	//	}
	//}
	//for (int i = 0; i < T; i++)
	//{
	//	cout << de[i] / mol[i];
	//}
	long long T, N, M;
	
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		memset(d, 0, sizeof(d));
		cin >> N >> M;

		cout << combination(M, N) << endl;
	}
}