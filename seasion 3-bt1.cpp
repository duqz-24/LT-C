#include <stdio.h>

int main() {
    char ten[50]; // Khai báo biến ten để lưu trữ tên, tối đa 50 ký tự

    printf("Nhap ten cua ban: ");
    scanf("%s", ten); // Nhập tên từ bàn phím và lưu vào biến ten

    printf("Xin chao %s!\n", ten);

    return 0;
}