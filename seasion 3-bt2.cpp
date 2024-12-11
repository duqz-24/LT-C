#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Nhap nhiet do theo do Celsius: ");
    scanf("%f", &celsius);

    // Chuyển đổi từ Celsius sang Fahrenheit
    fahrenheit = (celsius * 9/5) + 32;

    printf("%.2f độ C tương đương %.2f độ F\n", celsius, fahrenheit);

    return 0;
}