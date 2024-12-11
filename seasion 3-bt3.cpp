#include <stdio.h>

#define PI 3.14159

int main() {
    float r, chuVi, dienTich;

    printf("Nhap ban kinh hinh tron (r): ");
    scanf("%f", &r);

    // Tính chu vi và diện tích
    chuVi = 2 * PI * r;
    dienTich = PI * r * r;

    // In kết quả
    printf("Chu vi hinh tron la: %.2f\n", chuVi);
    printf("Dien tich hinh tron la: %.2f\n", dienTich);

    return 0;
}