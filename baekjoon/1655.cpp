#include<iostream>
#include<vector>
using namespace std;

template <typename T>
void merge(std::vector<T>& t, std::vector<T>& a1, std::vector<T>& a2);
template <typename T>
void merge_sort(std::vector<T>& array);

int main (void) {
	vector<int>v;
	vector<int>shout;
	int N; //정수의 갯수
	int x; // 계속 바뀌는 정수값
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> x;
		v.push_back(x);
		/*v를 정렬
		
		*/

        merge_sort(v);

		if (v.size() % 2 == 0)
		{
			shout.push_back(v[v.size() / 2 - 1]);
		}
		else 
		{
			shout.push_back(v[v.size() / 2 ]);
		}
	}

    for (int i = 0; i < N; i++)
    {
        cout << shout[i];
    }
}

template <typename T>
void merge(std::vector<T>& t, std::vector<T>& a1, std::vector<T>& a2) {
    t.clear();
    typename std::vector<T>::iterator itr1 = a1.begin();
    typename std::vector<T>::iterator itr2 = a2.begin();

    while (itr1 != a1.end() || itr2 != a2.end()) {
        if (itr1 != a1.end() && itr2 != a2.end()) {
            if (*itr1 < *itr2) {
                t.push_back(*itr1++);
            }
            else {
                t.push_back(*itr2++);
            }
        }
        else {
            if (itr1 != a1.end()) {
                t.push_back(*itr1++);
            }
            else {
                t.push_back(*itr2++);
            }
        }
    }
}

template <typename T>
void merge_sort(std::vector<T>& array) {
    if (1 < array.size()) {
        int f = array.size() / 2;
        std::vector<T> array1(array.begin(), array.begin() + f);
        merge_sort(array1);
        std::vector<T> array2(array.begin() + f, array.end());
        merge_sort(array2);
        merge(array, array1, array2);
    }
}