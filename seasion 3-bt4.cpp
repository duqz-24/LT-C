#include <stdio.h>

int main() {
    float toan, van, anh, tong, trungBinh;

    // Nhập điểm các môn
    printf("Nhap diem Toan: ");
    scanf("%f", &toan);

    printf("Nhap diem Van: ");
    scanf("%f", &van);

    printf("Nhap diem Anh: ");
    scanf("%f", &anh);

    // Tính tổng và trung bình
    tong = toan + van + anh;
    trungBinh = tong / 3;

    // In kết quả
    printf("Tong diem: %.2f\n", tong);
    printf("Diem trung binh: %.2f\n", trungBinh);

    return 0;
}