#include <stdio.h>

int main() {
    int n;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int numbers[n]; // Khai báo mảng với kích thước n

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("Cac phan tu cua mang la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}