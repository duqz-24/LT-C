#include <stdio.h>

int main() {
    int num1, num2, choice;

    // Nhập hai số
    printf("Nhap so thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so thu hai: ");
    scanf("%d", &num2);

    // Hiển thị menu và thực hiện phép toán
    do {
        printf("\nMenu:\n");
        printf("1. Hien thi hai so\n");
        printf("2. Tinh tong\n");
        printf("3. Tinh hieu\n");
        printf("4. Tinh tich\n");
        printf("5. Tinh thuong\n");
        printf("0. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Hai so vua nhap la: %d va %d\n", num1, num2);
                break;
            case 2:
                printf("Tong hai so la: %d\n", num1 + num2);
                break;
            case 3:
                printf("Hieu hai so la: %d\n", num1 - num2);
                break;
            case 4:
                printf("Tich hai so la: %d\n", num1 * num2);
                break;
            case 5:
                if (num2 == 0) {
                    printf("Khong the chia cho 0!\n");
                } else {
                    printf("Thuong hai so la: %.2lf\n", (double)num1 / num2);
                }
                break;
            case 0:
                printf("Tam biet!\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai!\n");
        }
    } while (choice != 0);

    return 0;
}