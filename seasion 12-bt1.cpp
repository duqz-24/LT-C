#include <stdio.h>

int tinh_tong(int a, int b) {
    int tong = a + b;
    return tong;
}

int main() {
    int so1, so2, ket_qua;

    printf("Nhap so thu nhat: ");
    scanf("%d", &so1);

    printf("Nhap so thu hai: ");
    scanf("%d", &so2);

    ket_qua = tinh_tong(so1, so2);

    printf("Tong cua %d va %d la: %d\n", so1, so2, ket_qua);

    return 0;
}