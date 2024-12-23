#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }

    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int n;

    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &n);

    if (isPrime(n)) {
        printf("%d la so nguyen to.\n", n);
    } else {
        printf("%d khong phai la so nguyen to.\n", n);
    }

    return 0;
}