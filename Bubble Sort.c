#include <stdio.h>
#include <malloc.h>
#include <locale.h>

void BubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}



int main() {
    setlocale(LC_ALL, "Rus");
    int *array;
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
    BubbleSort(array, n);

    printf("Массив после сортировки: ");
    for (int i = 0; i < n; i++)
        printf("%d ", array[i]);

    return 0;
}
