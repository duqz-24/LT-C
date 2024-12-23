#include <stdio.h>

#define MAX_SIZE 100

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int binarySearch(int arr[], int l, int r, int x) {
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            r = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[MAX_SIZE];
    int n, x, result;

    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX_SIZE) {
        printf("So luong phan tu khong hop le!\n");
        return 1;
    }

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Mang ban dau: \n");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Mang sau khi sap xep: \n");
    printArray(arr, n);

    printf("Nhap phan tu can tim: ");
    scanf("%d", &x);

    result = binarySearch(arr, 0, n - 1, x);
    if (result == -1)
        printf("%d khong tim thay trong mang\n", x);
    else
        printf("%d tim thay tai vi tri %d\n", x, result);

    return 0;
}