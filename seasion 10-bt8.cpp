#include <stdio.h>

#define MAX_SIZE 100

void selectionSort(int arr[], int n) {
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

void printArray(int arr[][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int arr[MAX_SIZE][MAX_SIZE];
    int n, m;

    printf("Nhap so dong: ");
    scanf("%d", &n);
    printf("Nhap so cot: ");
    scanf("%d", &m);

    if (n <= 0 || m <= 0 || n > MAX_SIZE || m > MAX_SIZE) {
        printf("So luong dong hoac cot khong hop le!\n");
        return 1;
    }

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Mang ban dau:\n");
    printArray(arr, n, m);

    for (int j = 0; j < m; j++) {
        int temp[MAX_SIZE];
        for (int i = 0; i < n; i++) {
            temp[i] = arr[i][j];
        }
        selectionSort(temp, n);
        for (int i = 0; i < n; i++) {
            arr[i][j] = temp[i];
        }
    }

    printf("Mang sau khi sap xep theo cot:\n");
    printArray(arr, n, m);

    return 0;
}