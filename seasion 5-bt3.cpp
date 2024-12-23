#include <stdio.h>

int main() {
    int n, tong = 0;

    printf("Nhap vao mot so nguyen duong n: ");
    scanf("%d", &n);

    // Kiểm tra xem n có phải số nguyên dương không
    if (n <= 0) {
        printf("Vui long nhap so nguyen duong.\n");
    } else {
        // Tính tổng các số từ 1 đến n
        for (int i = 1; i <= n; i++) {
            tong += i;
        }

        printf("Tong cac so tu 1 den %d la: %d\n", n, tong);
    }

    return 0;
}