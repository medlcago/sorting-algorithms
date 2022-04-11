#include <stdio.h>
#include <malloc.h>
#include <locale.h>


void selection_sort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		int min_v = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[min_v] > arr[j]) {
				min_v = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[min_v];
		arr[miv_v] = temp;
	}
}


int main() {
	setlocale(LC_ALL, "Rus");
	int* array;
	int n;
	printf("Размер массива: ");
	scanf_s("%d", &n);
	array = (int*)malloc(n * sizeof(int));

	for (int i = 0; i < n; i++)
		scanf_s("%d", &array[i]);

	printf("Массив до сортировки: ");
	for (int i = 0; i < n; i++)
		printf("%d ", array[i]);

	printf("\n");
	
	selection_sort(array, n);

	printf("Массив после сортировки: ");
	for (int i = 0; i < n; i++)
		printf("%d ", array[i]);

	return 0;
}
