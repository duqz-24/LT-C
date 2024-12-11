#include <stdio.h>

int main() {
    float canhDay, chieuCao, dienTich;

    // Nhập dữ liệu từ người dùng
    printf("Nhap do dai canh day cua tam giac: ");
    scanf("%f", &canhDay);

    printf("Nhap chieu cao cua tam giac: ");
    scanf("%f", &chieuCao);

    // Tính diện tích
    dienTich = (canhDay * chieuCao) / 2;

    // In kết quả
    printf("Dien tich cua tam giac la: %.2f\n", dienTich);

    return 0;
}