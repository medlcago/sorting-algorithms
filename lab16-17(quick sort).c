#include <stdio.h>
#include <malloc.h>
#include <locale.h>


void quick_sort(int *arr, int first, int last) {
	if (first < last) {
		int left = first, right = last, mid = arr[(left + right) / 2];
			do {
				//Пробегаем элементы, ищем те, которые нужно перекинуть в другую часть
				//В левой части массива пропускаем(оставляем на месте) элементы, которые меньше центрального
				while (arr[left] < mid) {
					left++;
				}
				//В правой части пропускаем элементы, которые больше центрального
				while (arr[right] > mid) {
					right--;
				}

				//Меняем элементы местами
				if (left <= right) {
					int tmp = arr[left];
					arr[left] = arr[right];
					arr[right] = tmp;

					left++;
					right--;
				}
			} while (left <= right);
			quick_sort(arr, first, right);
			quick_sort(arr, left, last);
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
	
	quick_sort(array, 0, n - 1);

	printf("Массив после сортировки: ");
	for (int i = 0; i < n; i++)
		printf("%d ", array[i]);

	return 0;
}
