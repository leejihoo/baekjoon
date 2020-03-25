#include<iostream>
#include<map>
#include<cmath>
using namespace std;

int main(void)
{

	
	map<string, int>m;
	m.insert(make_pair("black", 0));
	m.insert(make_pair("brown", 1));
	m.insert(make_pair("red", 2));
	m.insert(make_pair("orange", 3));
	m.insert(make_pair("yellow", 4));
	m.insert(make_pair("green", 5));
	m.insert(make_pair("blue", 6));
	m.insert(make_pair("violet", 7));
	m.insert(make_pair("grey", 8));
	m.insert(make_pair("white", 9));

	string fir,sec,thr;
	int num1, num2, num3;
	cin >> fir;
	cin >> sec;
	cin >> thr;
	num1 = m.find(fir)->second;
	num2 = m.find(sec)->second;
	num3 = m.find(thr)->second;
	int num4 = (num1 * 10) + num2;
	cout << num4;
	if(num4 != 0)
	for (int i = 0; i < num3; i++)
	{
		cout << 0;
	}

	cout << endl;
}