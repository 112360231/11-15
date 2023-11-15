#include <stdio.h>


void optimized_bubble_sort(int arr[], int n) {
	int i, j;
	int swapped; 

	for (i = 0; i < n; i++) {
		swapped = 0; 

		for (j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;

				swapped = 1;
			}
		}

		if (!swapped) {
			break;
		}
	}
}

int main() {
	
	int my_array[] = { 64, 34, 25, 12, 22, 11, 90 };
	int n = sizeof(my_array) / sizeof(my_array[0]);

	printf("原始數組: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", my_array[i]);
	}

	optimized_bubble_sort(my_array, n);

	printf("\n排序後的數組: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", my_array[i]);
	}

	return 0;
}
