#include<iostream>
#include<vector>
using namespace std;

void heapifyMin(int heap[], int i, int n);
void buildHeapMin(int heap[], int i, int n);
void heapifyMax(int heap[], int i, int n);
void buildHeapMax(int heap[], int i, int n);

int main(void)
{
	int N = 0; // ������ ����
	int arr1[50000];
	int arr2[50000];

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		if (N % 2 == 0)
		{

		}
		else
		{

		}
	}
}

void heapifyMin(int heap[], int i, int n) { // �ּ����� �����ϱ����� �������� �ö�
	int ai = heap[i];
	while (i < n / 2) {
		int j = 2 * i + 1;
		if (j + 1 < n && heap[j + 1] < heap[j])
			++j;
		if (heap[j] >= ai)break;
		heap[i] = heap[j];
		i = j;
	}
	heap[i] = ai;
}

void buildHeapMin(int heap[], int i, int n) { //����ȭ�� ����, ������ ���Ѵ����ش�.
	if (i >= n / 2) return;                //���� �� ������ �ڽĵ鵵 ��� ���ش�.
	buildHeapMin(heap, 2 * i + 1, n);
	buildHeapMin(heap, 2 * i + 2, n);
	heapifyMin(heap, i, n);
}


void heapifyMax(int heap[], int i, int n) { // �ִ����� �����ϱ����� ū���� �ö�
	int ai = heap[i];
	while (i < n / 2) {
		int j = 2 * i + 1;
		if (j + 1 < n && heap[j + 1] > heap[j])
			++j;
		if (heap[j] <= ai)break;
		heap[i] = heap[j];
		i = j;
	}
	heap[i] = ai;
}

void buildHeapMax(int heap[], int i, int n) { //����ȭ�� ����, ������ ���Ѵ����ش�.
	if (i >= n / 2) return;                //���� �� ������ �ڽĵ鵵 ��� ���ش�.
	buildHeapMax(heap, 2 * i + 1, n);
	buildHeapMax(heap, 2 * i + 2, n);
	heapifyMax(heap, i, n);
}