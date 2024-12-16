#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Nhập vào 3 số nguyên: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Sắp xếp các số để đảm bảo num1 <= num2
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    if (num3 >= num1 && num3 <= num2) {
        printf("%d nằm trong khoảng giữa %d và %d.\n", num3, num1, num2);
    } else {
        printf("%d không nằm trong khoảng giữa %d và %d.\n", num3, num1, num2);
    }

    return 0;
}