#include <stdio.h>

int main() {
    int month;

    printf("Nhập vào số tháng (1-12): ");
    scanf("%d", &month);

    if (month < 1 || month > 12) {
        printf("Số tháng không hợp lệ.\n");
    } else {
        switch (month) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                printf("Tháng %d có 31 ngày.\n", month);
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                printf("Tháng %d có 30 ngày.\n", month);
                break;
            case 2:
                printf("Tháng %d có 28 hoặc 29 ngày.\n", month);
                break;
        }
    }

    return 0;
}