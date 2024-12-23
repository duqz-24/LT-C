#include <stdio.h>

int main() {
    int numbers[5];
    int countEven = 0;
    int countOdd = 0;

    printf("Nhap 5 so nguyen:\n");
    for (int i = 0; i < 5; i++) {
        printf("Nhap so thu %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0) {
            countEven++;
        } else {
            countOdd++;
        }
    }

    printf("So luong so chan la: %d\n", countEven);
    printf("So luong so le la: %d\n", countOdd);

    return 0;
}