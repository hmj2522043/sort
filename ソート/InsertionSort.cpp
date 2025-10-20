#include <stdio.h>

void print_data(int data[], int size) {
	for (size_t i = 0; i < size; i++) {
		printf("%d ", data[i]);
	}
	printf("\n");
	return;
}

void insertion_sort(int data[], int size) {
	for (int i = 1; i < size; i++) {
		int temp = data[i];
		int j = i - 1;
		for (; (j >= 0) && (data[j] > temp); j--) {
			data[j + 1] = data[j];
		}
		data[j + 1] = temp;
		print_data(data, size);
	}
	return;
}

int main(int argc, char* argv[]) {
	int data[] = { 4, 9, 3, 1, 6 };
	int size = sizeof(data) / sizeof(int);
	print_data(data, size);
	insertion_sort(data, size);
	return 0;
}