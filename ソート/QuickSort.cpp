#include <stdio.h>
#include <stdbool.h>

void swap(int data[], int idx1, int idx2) {
	int temp = data[idx1];
	data[idx1] = data[idx2];
	data[idx2] = temp;
	return;
}

void quick_sort(int data[], int top_idx, int last_idx) {
	int base = data[(top_idx + last_idx) / 2];
	if (top_idx < last_idx) {
		int s_idx = top_idx;
		int l_idx = last_idx;
		bool cont = true;
		while (cont) {
			while (data[s_idx] < base) {
				s_idx++;
			}
			while (data[l_idx] > base) {
				l_idx--;
			}
			if (s_idx < l_idx) {
				swap(data, s_idx++, l_idx--);
			}
			else {
				cont = false;
			}
		}
		quick_sort(data, top_idx, s_idx - 1);
		quick_sort(data, l_idx + 1, last_idx);
	}
	return;
}

int main(int argc, char* argv[]) {
	int data[] = { 4,9,3,1,6 };
	int size = sizeof(data) / sizeof(int);
	quick_sort(data, 0, size - 1);
	for (int i = 0; i < size; i++) {
		printf("%d ", data[i]);
	}
	printf("\n");
	return 0;
}