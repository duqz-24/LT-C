#include <stdio.h>

int main() {
    int number;

    printf("Nhập vào một số nguyên: ");
    scanf("%d", &number);

    if (number % 3 == 0 && number % 5 == 0) {
        printf("%d chia hết cho cả 3 và 5.\n", number);
    } else if (number % 3 == 0) {
        printf("%d chia hết cho 3.\n", number);
    } else if (number % 5 == 0) {
        printf("%d chia hết cho 5.\n", number);
    } else {
        printf("%d không chia hết cho 3 hoặc 5.\n", number);
    }

    return 0;
}