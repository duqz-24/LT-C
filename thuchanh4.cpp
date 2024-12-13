#include <stdio.h>

int main() {
    int number, i;

    printf("Nhap vao mot so nguyen duong: ");
    scanf("%d", &number);

    printf("Cac uoc cua %d la: ", number);
    for (i = 1; i <= number; i++) {
        if (number % i == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}