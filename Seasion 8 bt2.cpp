#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x, i;
    printf("Nhập giá trị cần tìm: ");
    scanf("%d", &x);
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("Vị trí của %d trong mảng là: %d\n", x, i);
            return 0; // Tìm thấy, thoát vòng lặp
        }
    }
    printf("Phần tử %d không tồn tại trong mảng:\n", x);

    return 0;
}