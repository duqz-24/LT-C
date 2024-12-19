#include <stdio.h>

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; 
    int rows = 3, cols = 3;
    int sum = 0;

    for (int i = 0; i < rows; i++) {
        sum += arr[i][0] + arr[i][cols - 1];
    }
    for (int j = 1; j < cols - 1; j++) {
        sum += arr[0][j] + arr[rows - 1][j];
    }

    printf("Tổng các phần tử trên đường biên của ma trận là: %d\n", sum);

    return 0;
}