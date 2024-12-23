#include <stdio.h>

int main() {
    int n;

    // Nhập số từ bàn phím
    do {
        printf("Nhap vao mot so nguyen duong tu 1 den 10: ");
        scanf("%d", &n);
    } while (n < 1 || n > 10);

    // In bảng cửu chương
    printf("Bang cuu chuong cua %d:\n", n);
    for (int i = 1; i <= 10; ++i) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}