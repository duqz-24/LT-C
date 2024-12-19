#include <stdio.h>

int main() {
    int arr[3][3] = {{1, 5, 3}, {7, 2, 9}, {4, 6, 8}}; // Ví dụ mảng 3x3
    int rows = 3, cols = 3;
    int max = arr[0][0]; 
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }

    printf("Phần tử lớn nhất trong mảng là: %d\n", max);

    return 0;
}