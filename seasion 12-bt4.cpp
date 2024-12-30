#include <stdio.h>

int tim_so_lon_nhat(int arr[], int n) {
    int max = arr[0]; // Giả sử phần tử đầu tiên là lớn nhất
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[] = {2, 5, 1, 8, 3};
    int n = sizeof(arr) / sizeof(arr[0]); // Tính kích thước mảng

    int so_lon_nhat = tim_so_lon_nhat(arr, n);
    printf("So lon nhat trong mang la: %d\n", so_lon_nhat);

    return 0;
}