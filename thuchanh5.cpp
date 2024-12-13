#include <stdio.h>
#include <math.h>

int main() {
    int number, i;
    int isPrime = 1; // Giả sử ban đầu số đó là số nguyên tố

    printf("Nhap vao mot so nguyen duong: ");
    scanf("%d", &number);

    // Kiểm tra các trường hợp đặc biệt
    if (number <= 1) {
        isPrime = 0;
    } else {
        // Vòng lặp kiểm tra từ 2 đến căn bậc hai của number
        for (i = 2; i <= sqrt(number); i++) {
            if (number % i == 0) {
                isPrime = 0;
                break; // Nếu tìm thấy ước, dừng vòng lặp
            }
        }
    }

    if (isPrime) {
        printf("%d la so nguyen to.", number);
    } else {
        printf("%d khong phai la so nguyen to.", number);
    }

    return 0;
}