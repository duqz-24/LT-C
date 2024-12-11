#include <stdio.h>

#define PI 3.14

int main() {
    float banKinh;

    printf("Nhập bán kính hình tròn: ");
    scanf("%f", &banKinh);

    float chuViHinhTron = 2 * PI * banKinh;
    float dienTichHinhTron = PI * banKinh * banKinh;

    printf("Chu vi của hình tròn là: %.2f\n", chuViHinhTron);
    printf("Diện tích của hình tròn là: %.2f\n", dienTichHinhTron);

    return 0;
}