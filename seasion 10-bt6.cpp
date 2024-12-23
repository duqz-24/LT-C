#include <stdio.h>

#define MAX_SIZE 100

void linearSearch(int arr[], int n, int x, int result[]) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            result[count] = i;
            count++;
        }
    }
    printf("Các vị trí tìm thấy: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
}

int main() {
    int arr[MAX_SIZE];
    int n, x, result[MAX_SIZE];

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

    printf("Nhap phan tu can tim: ");
    scanf("%d", &x);

    linearSearch(arr, n, x, result);

    return 0;
}