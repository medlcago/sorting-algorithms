#include <stdio.h>
#include <malloc.h>
#include <locale.h>


void insertion_sort(int arr[], int n) {
	for (int top = 1; top < n; top++) {
		int k = top;
		while (k > 0 and arr[k - 1] > arr[k]) {
			int tmp = arr[k];
			arr[k] = arr[k - 1];
			arr[k - 1] = tmp;
			k--;
		}
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
	
	insertion_sort(array, n);

	printf("Массив после сортировки: ");
	for (int i = 0; i < n; i++)
		printf("%d ", array[i]);

	return 0;
}