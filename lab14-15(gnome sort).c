#include <stdio.h>
#include <malloc.h>
#include <locale.h>


void gnome_sort(int arr[], int n) {
	int i = 1, j = 2;

	while (i < n) {
		if (arr[i - 1] <= arr[i]) {
			i = j;
			j++;
		}
		else {
			int tmp = arr[i - 1];
			arr[i - 1] = arr[i];
			arr[i] = tmp;
			i--;
			if (i == 0) {
				i = j;
				j++;
			}
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
	
	gnome_sort(array, n);

	printf("Массив после сортировки: ");
	for (int i = 0; i < n; i++)
		printf("%d ", array[i]);

	return 0;
}
