#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n, count = 0, number = 2;

    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    printf("N so nguyen to dau tien la: ");
    while (count < n) {
        if (isPrime(number)) {
            printf("%d ", number);
            count++;
        }
        number++;
    }

    return 0;
}