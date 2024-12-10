#include <stdio.h>

int main() {
    // Khai báo và khởi tạo các biến
    int age = 30; // Tuổi
    float height = 1.75; // Chiều cao (mét)
    double weight = 65.5; // Cân nặng (kg)
    char initial = 'T'; // Ký tự đầu tiên của tên

    // In ra giá trị của các biến
    printf("Tuổi: %d\n", age);
    printf("Chiều cao: %.2f m\n", height);
    printf("Cân nặng: %.1f kg\n", weight);
    printf("Ký tự đầu tiên: %c\n", initial);

    return 0;
}