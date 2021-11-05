#include <stdio.h>
#include <malloc.h>
#include <locale.h>


void shell_sort(int arr[], int n) {
	int gap = n / 2;
	while (gap) {
		for (int i = gap; i < n; i++) {
			int cur_v = arr[i];
			int position = i;
			while (position >= gap && arr[position - gap] > cur_v) {
				arr[position] = arr[position - gap];
				position -= gap;
				arr[position] = cur_v;
			}
		}
		gap /= 2;
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
	
	shell_sort(array, n);

	printf("Массив после сортировки: ");
	for (int i = 0; i < n; i++)
		printf("%d ", array[i]);

	return 0;
}