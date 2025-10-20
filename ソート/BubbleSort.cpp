#include"BubbleSort.h"
#include <stdio.h>

#define DATA_SIZE (5)

void print_data(int data[]) {
	for (size_t i = 0; i < DATA_SIZE; i++) {
		printf("%d ", data[i]);
	}
	printf("\n");
	return;
}

void bubble_sort(int data[]) {
	for (int i = DATA_SIZE - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (data[j] > data[j + 1]) {
				int temp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = temp;
			}
			print_data(data);
		}
	}
	return;
}

int main(int argc, char* argv[]) {
	int data[DATA_SIZE] = { 4,9,3,1,6 };
	print_data(data);
	bubble_sort(data);
	return 0;
}