#include <stdio.h>
#include <malloc.h>
#include <locale.h>


void comb(int arr[], int n) {
	int gap = n;
	bool swaps = true;
	while (gap > 1 or swaps) {
		if (1 > int(gap / 1.25))
			gap = 1;
		else
			gap = int(gap / 1.25);
		swaps = false;
		for (int i = 0; i < n - gap; i++) {
			int j = i + gap;
			if (arr[i] > arr[j]) {
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
				swaps = true;
			}
		}

	}
}


int main() {
	setlocale(LC_ALL, "Rus");
	int *array;
	int n;
	printf("Размера массива: ");
	scanf_s("%d", &n);
	array = (int*)malloc(n * sizeof(int));
	
	for (int i = 0; i < n; i++)
		scanf_s("%d", &array[i]);

	printf("Массив до сортировки: ");
	for (int i = 0; i < n; i++)
		printf("%d ", array[i]);

	printf("\n");
	comb(array, n);
	
	printf("Массив после сортировки: ");
	for (int i = 0; i < n; i++)
		printf("%d ", array[i]);

	return 0;
}