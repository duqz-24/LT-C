#include <stdio.h>
#include <math.h>

int main() {
    int n;

    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &n);

    printf("Cac uoc cua %d la: ", n);

    for (int i = 1; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            printf("%d ", i);

            if (i != n / i) {
                printf("%d ", n / i);
            }
        }
    }

    printf("\n");

    return 0;
}