#include <stdio.h>

int main() {
    int numbers[5] = {2, 5, 8, 11, 14}; // Ví dụ: Mảng đã được khởi tạo sẵn
    int count = 0; // Đếm số lượng số chẵn

    printf("Các số chẵn trong mảng là: ");

    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0) {
            printf("%d ", numbers[i]);
            count++;
        }
    }

    if (count == 0) {
        printf("Mảng không chứa số chẵn.\n");
    } else {
        printf("\n");
    }

    return 0;
}