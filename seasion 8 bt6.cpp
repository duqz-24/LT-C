#include <stdio.h>

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; // Ví dụ ma trận 3x3
    int n = 3;
    int sum = 0;

    printf("Các phần tử trên đường chéo chính:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i][i]);
        sum += arr[i][i];
    }

    printf("\nTổng các phần tử trên đường chéo chính: %d\n", sum);

    return 0;
}