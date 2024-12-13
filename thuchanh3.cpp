#include <stdio.h>

int main() {
    int choice, amount;
    float result;

    // Hiển thị menu
    printf("============CHUONG TRINH CHUYEN DOI TIEN TE============\n");
    printf("1. USD to VND\n");
    // ... các lựa chọn khác ...
    printf("Nhập đơn vị tiền tệ bạn muốn chuyển đổi (1-8): ");
    scanf("%d", &choice);

    printf("Nhập số tiền cần chuyển đổi: ");
    scanf("%d", &amount);

    // Sử dụng switch-case để thực hiện chuyển đổi
    switch (choice) {
        case 1:
            result = amount * 23500;
            printf("%d USD = %.2f VND\n", amount, result);
            break;
        case 2:
            // ... các case khác tương tự ...
        default:
            printf("Lựa chọn không hợp lệ!\n");
    }

    return 0;
}