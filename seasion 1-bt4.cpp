#include <stdio.h>

int main() {
    int canh; // Độ dài cạnh hình vuông

    printf("Nhập cạnh hình vuông: ");
    scanf("%d", &canh);

    // Tính chu vi và diện tích
    int chuVi = 4 * canh;
    int dienTich = canh * canh;

    // In kết quả
    printf("Chu vi: %d\n", chuVi);
    printf("Diện tích: %d\n", dienTich);

    return 0;
}