#include <stdio.h>

int giaithua(int n); // Chọn một trong các hàm giai thừa ở trên

int main() {
    int n;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    int ketqua = giaithua(n);
    printf("Giai thua cua %d la: %d\n", n, ketqua);

    return 0;
}