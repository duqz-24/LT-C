#include <stdio.h>

int main() {
    int number1, number2, sum, difference, product, quotient;

    printf("Nhập số thứ nhất: ");
    scanf("%d", &number1);

    printf("Nhập số thứ hai: ");
    scanf("%d", &number2);

    // Tính toán
    sum = number1 + number2;
    difference = number1 - number2;
    product = number1 * number2;
    quotient = number1 / number2;

    // In kết quả
    printf("Tổng: %d\n", sum);
    printf("Hiệu: %d\n", difference);
    printf("Tích: %d\n", product);
    printf("Thương: %d\n", quotient);
    return 0;
}