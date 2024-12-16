#include <stdio.h>

int main() {
    int number;

    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("%d la so duong.\n", number);
    } else if (number < 0) {
        printf("%d la so am.\n", number);
    } else {
        printf("%d la so 0.\n", number);
    }

    return 0;
}