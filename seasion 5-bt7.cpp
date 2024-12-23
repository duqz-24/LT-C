#include <stdio.h>

int ucln(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int a, b;

    printf("Nhap so nguyen duong thu nhat: ");
    scanf("%d", &a);

    printf("Nhap so nguyen duong thu hai: ");
    scanf("%d", &b);

    int result = ucln(a, b);

    printf("Uoc chung lon nhat cua %d va %d la: %d\n", a, b, result);

    return 0;
}