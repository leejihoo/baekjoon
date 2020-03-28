#include<iostream>
#include<vector>
using namespace std;

void heapifyMin(int heap[], int i, int n);
void buildHeapMin(int heap[], int i, int n);
void heapifyMax(int heap[], int i, int n);
void buildHeapMax(int heap[], int i, int n);

int main(void)
{
	int N = 0; // 정수의 갯수
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

void heapifyMin(int heap[], int i, int n) { // 최소힙을 구현하기위해 작은값이 올라감
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

void buildHeapMin(int heap[], int i, int n) { //히프화를 왼쪽, 오른쪽 노드둘다해준다.
	if (i >= n / 2) return;                //또한 그 노드들의 자식들도 모두 해준다.
	buildHeapMin(heap, 2 * i + 1, n);
	buildHeapMin(heap, 2 * i + 2, n);
	heapifyMin(heap, i, n);
}


void heapifyMax(int heap[], int i, int n) { // 최대힙을 구현하기위해 큰값이 올라감
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

void buildHeapMax(int heap[], int i, int n) { //히프화를 왼쪽, 오른쪽 노드둘다해준다.
	if (i >= n / 2) return;                //또한 그 노드들의 자식들도 모두 해준다.
	buildHeapMax(heap, 2 * i + 1, n);
	buildHeapMax(heap, 2 * i + 2, n);
	heapifyMax(heap, i, n);
}