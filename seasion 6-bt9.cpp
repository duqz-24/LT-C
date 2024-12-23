#include <stdio.h>
#include <math.h>

int main() {
    printf("Các số Armstrong có 3 chữ số là:\n");

    for (int i = 100; i <= 999; ++i) {
        int temp = i, sum = 0, digit;

        while (temp != 0) {
            digit = temp % 10;
            sum += pow(digit, 3);
            temp /= 10;
        }

        if (sum == i) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}