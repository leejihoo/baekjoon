#include<iostream>
using namespace std;

void heapify(int heap[], int i, int n);
void buildHeap(int heap[], int i, int n);
int main(void) {
	int x, y, w, h;
	int len1, len2, len3, len4;
	
	cin >> x;
	cin >> y;
	cin >> w;
	cin >> h;
	
	len1 = x;
	len2 = y;
	len3 = w - x;
	len4 = h - y;
	int heap[4] = { len1, len2, len3, len4 };
	buildHeap(heap, 0, 4);
	cout << heap[0];
}

void heapify(int heap[], int i, int n) { // �ּ����� �����ϱ����� �������� �ö�
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

void buildHeap(int heap[], int i, int n) { //����ȭ�� ����, ������ ���Ѵ����ش�.
	if (i >= n / 2) return;                //���� �� ������ �ڽĵ鵵 ��� ���ش�.
	buildHeap(heap, 2*i + 1, n);
	buildHeap(heap, 2 * i + 2, n);
	heapify(heap, i, n);
}