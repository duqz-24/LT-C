#include <stdio.h>

int main() {
    float chieuDai, chieuRong; // Khai báo chiều dài và chiều rộng (sử dụng float để cho phép số thập phân)
    float chuVi, dienTich;

    // Nhập giá trị chiều dài và chiều rộng
    printf("Nhập chiều dài hình chữ nhật: ");
    scanf("%f", &chieuDai);

    printf("Nhập chiều rộng hình chữ nhật: ");
    scanf("%f", &chieuRong);

    // Tính chu vi và diện tích
    chuVi = 2 * (chieuDai + chieuRong);
    dienTich = chieuDai * chieuRong;

    // In kết quả
    printf("Chu vi hình chữ nhật là: %.2f\n", chuVi);
    printf("Diện tích hình chữ nhật là: %.2f\n", dienTich);

    return 0;
}