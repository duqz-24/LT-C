#include <stdio.h>

void tinh_tong(int a, int b, int *ket_qua) {
    *ket_qua = a + b;
}

int main() {
    int so1 = 10, so2 = 20, tong;

    printf("Truoc khi tinh: so1 = %d, so2 = %d\n", so1, so2);

    tinh_tong(so1, so2, &tong);

    printf("Tong cua hai so là: %d\n", tong);

    return 0;
}
